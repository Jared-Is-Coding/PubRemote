// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#include "ui.h"

void ui_PairingScreen_screen_init(void)
{
    ui_PairingScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PairingScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PairingScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PairingScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PairingContent = lv_obj_create(ui_PairingScreen);
    lv_obj_remove_style_all(ui_PairingContent);
    lv_obj_set_width(ui_PairingContent, lv_pct(100));
    lv_obj_set_height(ui_PairingContent, lv_pct(100));
    lv_obj_set_align(ui_PairingContent, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_PairingContent, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_PairingContent, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PairingContent, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_PairingContent, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PairingHeader = lv_obj_create(ui_PairingContent);
    lv_obj_remove_style_all(ui_PairingHeader);
    lv_obj_set_width(ui_PairingHeader, lv_pct(65));
    lv_obj_set_height(ui_PairingHeader, lv_pct(25));
    lv_obj_set_align(ui_PairingHeader, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PairingHeader, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PairingBody = lv_obj_create(ui_PairingContent);
    lv_obj_remove_style_all(ui_PairingBody);
    lv_obj_set_width(ui_PairingBody, lv_pct(100));
    lv_obj_set_height(ui_PairingBody, lv_pct(50));
    lv_obj_set_align(ui_PairingBody, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_PairingBody, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_PairingBody, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PairingBody, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PairingCode = lv_label_create(ui_PairingBody);
    lv_obj_set_width(ui_PairingCode, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PairingCode, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_PairingCode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PairingCode, "0000");
    lv_obj_set_style_text_font(ui_PairingCode, &ui_font_Inter_Bold_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PairingCodeLabel = lv_label_create(ui_PairingBody);
    lv_obj_set_width(ui_PairingCodeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PairingCodeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PairingCodeLabel, 19);
    lv_obj_set_y(ui_PairingCodeLabel, 38);
    lv_obj_set_align(ui_PairingCodeLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PairingCodeLabel, "Your pairing code");

    ui_PairingFooter = lv_obj_create(ui_PairingContent);
    lv_obj_remove_style_all(ui_PairingFooter);
    lv_obj_set_width(ui_PairingFooter, lv_pct(65));
    lv_obj_set_height(ui_PairingFooter, lv_pct(25));
    lv_obj_set_align(ui_PairingFooter, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_PairingFooter, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_PairingFooter, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PairingFooter, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PairingMainActionButton = lv_btn_create(ui_PairingFooter);
    lv_obj_set_width(ui_PairingMainActionButton, 80);
    lv_obj_set_height(ui_PairingMainActionButton, 42);
    lv_obj_set_align(ui_PairingMainActionButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_PairingMainActionButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PairingMainActionButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_PairingMainActionButton, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PairingMainActionButtonLabel = lv_label_create(ui_PairingMainActionButton);
    lv_obj_set_width(ui_PairingMainActionButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PairingMainActionButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_PairingMainActionButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PairingMainActionButtonLabel, "Cancel");

    lv_obj_add_event_cb(ui_PairingMainActionButton, ui_event_PairingMainActionButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PairingScreen, ui_event_PairingScreen, LV_EVENT_ALL, NULL);

}
