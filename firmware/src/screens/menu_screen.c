#include "esp_log.h"
#include "esp_system.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <remote/connection.h>
#include <remote/display.h>
#include <remote/powermanagement.h>
#include <remote/settings.h>
#include <ui/ui.h>

static const char *TAG = "PUBREMOTE-MENU_SCREEN";

static bool confirm_reset = false;

static void set_reset_mode(bool mode) {
  confirm_reset = mode;
  if (confirm_reset) {
    lv_label_set_text(ui_MenuShutdownButtonLabel, "Factory reset");
  }
  else {
    lv_label_set_text(ui_MenuShutdownButtonLabel, "Shutdown");
  }
}

bool is_menu_screen_active() {
  lv_obj_t *active_screen = lv_scr_act();
  return active_screen == ui_MenuScreen;
}

// Event handlers
void menu_screen_loaded(lv_event_t *e) {
  ESP_LOGI(TAG, "Menu screen loaded");

  set_reset_mode(false);

  if (LVGL_lock(0)) {
    if (pairing_state == PAIRING_STATE_PAIRED) {
      lv_obj_clear_flag(ui_MenuConnectButton, LV_OBJ_FLAG_HIDDEN);

      if (connection_state == CONNECTION_STATE_DISCONNECTED) {
        lv_label_set_text(ui_MenuConnectButtonLabel, "Connect");
      }
      else {
        lv_label_set_text(ui_MenuConnectButtonLabel, "Disconnect");
      }
    }
    else {
      lv_obj_add_flag(ui_MenuConnectButton, LV_OBJ_FLAG_HIDDEN);
    }
    LVGL_unlock();
  }
}

void menu_screen_unloaded(lv_event_t *e) {
  ESP_LOGI(TAG, "Menu screen unloaded");
}

void enter_deep_sleep(lv_event_t *e) {
  enter_sleep();
}

void menu_connect_press(lv_event_t *e) {
  ESP_LOGI(TAG, "Connect button pressed");

  if (connection_state == CONNECTION_STATE_DISCONNECTED) {
    connect_to_default_peer();
  }
  else {
    update_connection_state(CONNECTION_STATE_DISCONNECTED);
  }

  if (LVGL_lock(0)) {
    _ui_screen_change(&ui_StatsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_StatsScreen_screen_init);
    LVGL_unlock();
  }
}

void shutdown_button_press(lv_event_t *e) {
  ESP_LOGI(TAG, "Shutdown button press");
  if (!confirm_reset) {
    enter_sleep();
  }
  else {
    reset_all_settings();
    esp_restart();
  }
}
void shutdown_button_long_press(lv_event_t *e) {
  ESP_LOGI(TAG, "Shutdown button long press");
  set_reset_mode(!confirm_reset);
}