// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#include "ui.h"

void ui_StatsScreen_screen_init(void)
{
    ui_StatsScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_StatsScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_StatsScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StatsScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SpeedDial = lv_arc_create(ui_StatsScreen);
    lv_obj_set_width(ui_SpeedDial, lv_pct(100));
    lv_obj_set_height(ui_SpeedDial, lv_pct(100));
    lv_obj_set_align(ui_SpeedDial, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_SpeedDial, 0, 40);
    lv_arc_set_value(ui_SpeedDial, 0);
    lv_obj_set_style_arc_color(ui_SpeedDial, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_SpeedDial, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_SpeedDial, 16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_SpeedDial, 16, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_SpeedDial, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_SpeedBar = lv_bar_create(ui_StatsScreen);
    lv_bar_set_range(ui_SpeedBar, 0, 50);
    lv_obj_set_width(ui_SpeedBar, 15);
    lv_obj_set_height(ui_SpeedBar, lv_pct(100));
    lv_obj_set_y(ui_SpeedBar, 0);
    lv_obj_set_x(ui_SpeedBar, lv_pct(-45));
    lv_obj_set_align(ui_SpeedBar, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SpeedBar, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_bg_color(ui_SpeedBar, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SpeedBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UtilizationDial = lv_arc_create(ui_StatsScreen);
    lv_obj_set_width(ui_UtilizationDial, lv_pct(100));
    lv_obj_set_height(ui_UtilizationDial, lv_pct(100));
    lv_obj_set_align(ui_UtilizationDial, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_UtilizationDial, 0);
    lv_arc_set_mode(ui_UtilizationDial, LV_ARC_MODE_REVERSE);
    lv_obj_set_style_pad_left(ui_UtilizationDial, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_UtilizationDial, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_UtilizationDial, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_UtilizationDial, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_UtilizationDial, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_UtilizationDial, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_UtilizationDial, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_UtilizationDial, 12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_UtilizationDial, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_UtilizationBar = lv_bar_create(ui_StatsScreen);
    lv_obj_set_width(ui_UtilizationBar, 15);
    lv_obj_set_height(ui_UtilizationBar, lv_pct(100));
    lv_obj_set_y(ui_UtilizationBar, 0);
    lv_obj_set_x(ui_UtilizationBar, lv_pct(45));
    lv_obj_set_align(ui_UtilizationBar, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_UtilizationBar, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_bg_color(ui_UtilizationBar, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_UtilizationBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LeftSensor = lv_arc_create(ui_StatsScreen);
    lv_obj_set_width(ui_LeftSensor, lv_pct(100));
    lv_obj_set_height(ui_LeftSensor, lv_pct(100));
    lv_obj_set_align(ui_LeftSensor, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_LeftSensor, 0, 1);
    lv_arc_set_value(ui_LeftSensor, 0);
    lv_arc_set_bg_angles(ui_LeftSensor, 93, 105);
    lv_obj_set_style_arc_color(ui_LeftSensor, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_LeftSensor, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_LeftSensor, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_LeftSensor, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_LeftSensor, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_LeftSensor, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_LeftSensor, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_LeftSensor, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_RightSensor = lv_arc_create(ui_StatsScreen);
    lv_obj_set_width(ui_RightSensor, lv_pct(100));
    lv_obj_set_height(ui_RightSensor, lv_pct(100));
    lv_obj_set_align(ui_RightSensor, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_RightSensor, 0, 1);
    lv_arc_set_value(ui_RightSensor, 0);
    lv_arc_set_bg_angles(ui_RightSensor, 75, 87);
    lv_obj_set_style_arc_color(ui_RightSensor, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_RightSensor, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_RightSensor, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_RightSensor, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_RightSensor, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_RightSensor, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_RightSensor, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RightSensor, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_StatsContent = lv_obj_create(ui_StatsScreen);
    lv_obj_remove_style_all(ui_StatsContent);
    lv_obj_set_width(ui_StatsContent, lv_pct(100));
    lv_obj_set_height(ui_StatsContent, lv_pct(100));
    lv_obj_set_align(ui_StatsContent, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_StatsContent, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_StatsContent, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_StatsContent, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_StatsContent, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_MOMENTUM);      /// Flags
    lv_obj_set_style_pad_left(ui_StatsContent, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_StatsContent, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_StatsContent, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_StatsContent, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_StatsContent, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StatsHeader = lv_obj_create(ui_StatsContent);
    lv_obj_remove_style_all(ui_StatsHeader);
    lv_obj_set_width(ui_StatsHeader, lv_pct(100));
    lv_obj_set_height(ui_StatsHeader, lv_pct(25));
    lv_obj_set_x(ui_StatsHeader, 69);
    lv_obj_set_y(ui_StatsHeader, -16);
    lv_obj_set_align(ui_StatsHeader, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_StatsHeader, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_StatsHeader, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_StatsHeader, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RemoteIndicatorContainer = lv_obj_create(ui_StatsHeader);
    lv_obj_remove_style_all(ui_RemoteIndicatorContainer);
    lv_obj_set_width(ui_RemoteIndicatorContainer, LV_SIZE_CONTENT);   /// 50
    lv_obj_set_height(ui_RemoteIndicatorContainer, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_RemoteIndicatorContainer, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RemoteIndicatorContainer, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_RemoteIndicatorContainer, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RemoteIndicatorContainer, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_row(ui_RemoteIndicatorContainer, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_RemoteIndicatorContainer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BatteryIndicatorContainer = lv_obj_create(ui_RemoteIndicatorContainer);
    lv_obj_remove_style_all(ui_BatteryIndicatorContainer);
    lv_obj_set_width(ui_BatteryIndicatorContainer, 22);
    lv_obj_set_height(ui_BatteryIndicatorContainer, 14);
    lv_obj_set_align(ui_BatteryIndicatorContainer, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BatteryIndicatorContainer, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BatteryIndicatorContainer, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_BatteryIndicatorContainer, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BatteryOutline = lv_obj_create(ui_BatteryIndicatorContainer);
    lv_obj_remove_style_all(ui_BatteryOutline);
    lv_obj_set_width(ui_BatteryOutline, 18);
    lv_obj_set_height(ui_BatteryOutline, 12);
    lv_obj_set_align(ui_BatteryOutline, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_BatteryOutline, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_BatteryOutline, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_BatteryOutline, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BatteryOutline, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BatteryOutline, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BatteryOutline, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BatteryOutline, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BatteryFill = lv_obj_create(ui_BatteryOutline);
    lv_obj_remove_style_all(ui_BatteryFill);
    lv_obj_set_width(ui_BatteryFill, lv_pct(100));
    lv_obj_set_height(ui_BatteryFill, lv_pct(100));
    lv_obj_set_align(ui_BatteryFill, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BatteryFill, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BatteryFill, lv_color_hex(0x1DB200), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BatteryFill, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BatteryTip = lv_obj_create(ui_BatteryIndicatorContainer);
    lv_obj_remove_style_all(ui_BatteryTip);
    lv_obj_set_width(ui_BatteryTip, 3);
    lv_obj_set_height(ui_BatteryTip, 4);
    lv_obj_set_align(ui_BatteryTip, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_BatteryTip, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BatteryTip, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BatteryTip, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RSSIContainer = lv_obj_create(ui_RemoteIndicatorContainer);
    lv_obj_remove_style_all(ui_RSSIContainer);
    lv_obj_set_width(ui_RSSIContainer, 18);
    lv_obj_set_height(ui_RSSIContainer, 12);
    lv_obj_set_align(ui_RSSIContainer, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_RSSIContainer, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_RSSIContainer, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_RSSIContainer, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_RSSIContainer, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RSSI1 = lv_obj_create(ui_RSSIContainer);
    lv_obj_remove_style_all(ui_RSSI1);
    lv_obj_set_width(ui_RSSI1, 4);
    lv_obj_set_height(ui_RSSI1, 4);
    lv_obj_set_align(ui_RSSI1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RSSI1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RSSI1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RSSI1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RSSI2 = lv_obj_create(ui_RSSIContainer);
    lv_obj_remove_style_all(ui_RSSI2);
    lv_obj_set_width(ui_RSSI2, 4);
    lv_obj_set_height(ui_RSSI2, 8);
    lv_obj_set_align(ui_RSSI2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RSSI2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RSSI2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RSSI2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RSSI3 = lv_obj_create(ui_RSSIContainer);
    lv_obj_remove_style_all(ui_RSSI3);
    lv_obj_set_width(ui_RSSI3, 4);
    lv_obj_set_height(ui_RSSI3, 12);
    lv_obj_set_align(ui_RSSI3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_RSSI3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_RSSI3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RSSI3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MessageText = lv_label_create(ui_StatsHeader);
    lv_obj_set_width(ui_MessageText, lv_pct(100));
    lv_obj_set_height(ui_MessageText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MessageText, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_MessageText, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_MessageText, "PUSHBACK");
    lv_obj_add_flag(ui_MessageText, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_set_style_text_align(ui_MessageText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MessageText, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_MessageText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_MessageText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_MessageText, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_MessageText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StatsBody = lv_obj_create(ui_StatsContent);
    lv_obj_remove_style_all(ui_StatsBody);
    lv_obj_set_width(ui_StatsBody, lv_pct(100));
    lv_obj_set_height(ui_StatsBody, lv_pct(50));
    lv_obj_set_x(ui_StatsBody, 69);
    lv_obj_set_y(ui_StatsBody, -16);
    lv_obj_set_align(ui_StatsBody, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_StatsBody, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_StatsBody, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_StatsBody, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PrimaryStat = lv_label_create(ui_StatsBody);
    lv_obj_set_width(ui_PrimaryStat, lv_pct(100));
    lv_obj_set_height(ui_PrimaryStat, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_y(ui_PrimaryStat, 4);
    lv_obj_set_x(ui_PrimaryStat, lv_pct(-14));
    lv_obj_set_align(ui_PrimaryStat, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_PrimaryStat, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_PrimaryStat, "0.0");
    lv_obj_set_style_text_align(ui_PrimaryStat, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PrimaryStat, &ui_font_Inter_Bold_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PrimaryStatUnit = lv_label_create(ui_PrimaryStat);
    lv_obj_set_width(ui_PrimaryStatUnit, 40);
    lv_obj_set_height(ui_PrimaryStatUnit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PrimaryStatUnit, 64);
    lv_obj_set_y(ui_PrimaryStatUnit, 7);
    lv_obj_set_align(ui_PrimaryStatUnit, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PrimaryStatUnit, "kph");
    lv_obj_add_flag(ui_PrimaryStatUnit, LV_OBJ_FLAG_FLOATING);     /// Flags
    lv_obj_set_style_text_font(ui_PrimaryStatUnit, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SecondaryStat = lv_label_create(ui_StatsBody);
    lv_obj_set_width(ui_SecondaryStat, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_SecondaryStat, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SecondaryStat, -17);
    lv_obj_set_y(ui_SecondaryStat, 33);
    lv_obj_set_align(ui_SecondaryStat, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_SecondaryStat, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_SecondaryStat, "0%");
    lv_obj_add_flag(ui_SecondaryStat, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_SecondaryStat, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_SecondaryStat, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_align(ui_SecondaryStat, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SecondaryStat, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StatsFooter = lv_obj_create(ui_StatsContent);
    lv_obj_remove_style_all(ui_StatsFooter);
    lv_obj_set_width(ui_StatsFooter, lv_pct(100));
    lv_obj_set_height(ui_StatsFooter, lv_pct(25));
    lv_obj_set_x(ui_StatsFooter, 69);
    lv_obj_set_y(ui_StatsFooter, -16);
    lv_obj_set_align(ui_StatsFooter, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_StatsFooter, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_StatsFooter, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_StatsFooter, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_StatsFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_StatsFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_StatsFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_StatsFooter, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_StatsFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_StatsFooter, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BoardBatteryDisplay = lv_label_create(ui_StatsFooter);
    lv_obj_set_width(ui_BoardBatteryDisplay, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BoardBatteryDisplay, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BoardBatteryDisplay, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_BoardBatteryDisplay, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_BoardBatteryDisplay, "0%");
    lv_obj_set_style_text_font(ui_BoardBatteryDisplay, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_BoardBatteryDisplay, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_BoardBatteryDisplay, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_BoardBatteryDisplay, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_BoardBatteryDisplay, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TripDistanceDisplay = lv_label_create(ui_StatsFooter);
    lv_obj_set_width(ui_TripDistanceDisplay, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TripDistanceDisplay, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TripDistanceDisplay, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_TripDistanceDisplay, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_TripDistanceDisplay, "0km");
    lv_obj_set_style_text_font(ui_TripDistanceDisplay, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_TripDistanceDisplay, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_TripDistanceDisplay, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_TripDistanceDisplay, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_TripDistanceDisplay, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_StatsBody, ui_event_StatsBody, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StatsFooter, ui_event_StatsFooter, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StatsScreen, ui_event_StatsScreen, LV_EVENT_ALL, NULL);

}
