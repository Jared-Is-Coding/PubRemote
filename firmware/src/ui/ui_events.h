// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void stats_screen_loaded(lv_event_t * e);
void stats_screen_unloaded(lv_event_t * e);
void stat_long_press(lv_event_t * e);
void stat_swipe_left(lv_event_t * e);
void stat_swipe_right(lv_event_t * e);
void stats_footer_long_press(lv_event_t * e);
void menu_screen_loaded(lv_event_t * e);
void menu_screen_unloaded(lv_event_t * e);
void menu_connect_press(lv_event_t * e);
void shutdown_button_press(lv_event_t * e);
void shutdown_button_long_press(lv_event_t * e);
void settings_screen_loaded(lv_event_t * e);
void settings_screen_unloaded(lv_event_t * e);
void settings_screen_load_start(lv_event_t * e);
void brightness_slider_change(lv_event_t * e);
void auto_off_select_change(lv_event_t * e);
void temp_units_select_change(lv_event_t * e);
void distance_units_select_change(lv_event_t * e);
void theme_color_picker_change(lv_event_t * e);
void settings_save(lv_event_t * e);
void pairing_screen_loaded(lv_event_t * e);
void pairing_screen_unloaded(lv_event_t * e);
void calibration_screen_loaded(lv_event_t * e);
void calibration_screen_unloaded(lv_event_t * e);
void expo_slider_change(lv_event_t * e);
void calibration_settings_secondary_button_press(lv_event_t * e);
void calibration_settings_primary_button_press(lv_event_t * e);
void about_screen_loaded(lv_event_t * e);
void about_screen_unloaded(lv_event_t * e);
void about_screen_load_start(lv_event_t * e);
void update_button_press(lv_event_t * e);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
