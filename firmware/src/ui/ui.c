// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_SplashScreen
void ui_SplashScreen_screen_init(void);
void ui_event_SplashScreen( lv_event_t * e);
lv_obj_t *ui_SplashScreen;
lv_obj_t *ui_SplashScreenLogo;
// CUSTOM VARIABLES


// SCREEN: ui_StatsScreen
void ui_StatsScreen_screen_init(void);
void ui_event_StatsScreen( lv_event_t * e);
lv_obj_t *ui_StatsScreen;
lv_obj_t *ui_SpeedDial;
lv_obj_t *ui_UtilizationDial;
lv_obj_t *ui_LeftSensor;
lv_obj_t *ui_RightSensor;
lv_obj_t *ui_StatsContent;
lv_obj_t *ui_StatsHeader;
lv_obj_t *ui_RemoteIndicatorContainer;
lv_obj_t *ui_BatteryIndicatorContainer;
lv_obj_t *ui_BatteryOutline;
lv_obj_t *ui_BatteryFill;
lv_obj_t *ui_BatteryTip;
lv_obj_t *ui_RSSIContainer;
lv_obj_t *ui_RSSI1;
lv_obj_t *ui_RSSI2;
lv_obj_t *ui_RSSI3;
lv_obj_t *ui_MessageText;
void ui_event_StatsBody( lv_event_t * e);
lv_obj_t *ui_StatsBody;
lv_obj_t *ui_PrimaryStat;
lv_obj_t *ui_PrimaryStatUnit;
lv_obj_t *ui_SecondaryStat;
void ui_event_StatsFooter( lv_event_t * e);
lv_obj_t *ui_StatsFooter;
lv_obj_t *ui_BatteryDisplay;
// CUSTOM VARIABLES


// SCREEN: ui_MenuScreen
void ui_MenuScreen_screen_init(void);
void ui_event_MenuScreen( lv_event_t * e);
lv_obj_t *ui_MenuScreen;
lv_obj_t *ui_MenuContent;
lv_obj_t *ui_MenuBody;
void ui_event_MenuBackButton( lv_event_t * e);
lv_obj_t *ui_MenuBackButton;
lv_obj_t *ui_MenuBackButtonLabel;
void ui_event_MenuConnectButton( lv_event_t * e);
lv_obj_t *ui_MenuConnectButton;
lv_obj_t *ui_MenuConnectButtonLabel;
void ui_event_MenuAboutButton( lv_event_t * e);
lv_obj_t *ui_MenuAboutButton;
lv_obj_t *ui_MenuAboutButtonLabel;
void ui_event_MenuSettingsButton( lv_event_t * e);
lv_obj_t *ui_MenuSettingsButton;
lv_obj_t *ui_MenuSettingsButtonLabel;
void ui_event_MenuCalibrateButton( lv_event_t * e);
lv_obj_t *ui_MenuCalibrateButton;
lv_obj_t *ui_MenuCalibrateButtonLabel;
void ui_event_MenuPairButton( lv_event_t * e);
lv_obj_t *ui_MenuPairButton;
lv_obj_t *ui_MenuPairButtonLabel;
void ui_event_MenuShutdownButton( lv_event_t * e);
lv_obj_t *ui_MenuShutdownButton;
lv_obj_t *ui_MenuShutdownButtonLabel;
// CUSTOM VARIABLES


// SCREEN: ui_SettingsScreen
void ui_SettingsScreen_screen_init(void);
void ui_event_SettingsScreen( lv_event_t * e);
lv_obj_t *ui_SettingsScreen;
lv_obj_t *ui_SettingsContent;
lv_obj_t *ui_SettingsHeader;
lv_obj_t *ui_Selection1;
lv_obj_t *ui_Selection2;
lv_obj_t *ui_Selection3;
lv_obj_t *ui_Selection4;
lv_obj_t *ui_Selection5;
lv_obj_t *ui_SettingsBody;
lv_obj_t *ui_BrightnessBody;
void ui_event_BrightnessSlider( lv_event_t * e);
lv_obj_t *ui_BrightnessSlider;
lv_obj_t *ui_BrightnessLabel;
lv_obj_t *ui_PowerBody;
void ui_event_AutoOffTime( lv_event_t * e);
lv_obj_t *ui_AutoOffTime;
lv_obj_t *ui_PowerLabel;
lv_obj_t *ui_TempUnitsBody;
void ui_event_TempUnits( lv_event_t * e);
lv_obj_t *ui_TempUnits;
lv_obj_t *ui_TempUnitsLabel;
lv_obj_t *ui_DistanceUnitsBody;
void ui_event_DistanceUnits( lv_event_t * e);
lv_obj_t *ui_DistanceUnits;
lv_obj_t *ui_DistanceUnitsLabel;
lv_obj_t *ui_ThemeColorBody;
void ui_event_ThemeColor( lv_event_t * e);
lv_obj_t *ui_ThemeColor;
lv_obj_t *ui_ThemeColorLabel;
lv_obj_t *ui_SettingsFooter;
void ui_event_SettingsMainActionButton( lv_event_t * e);
lv_obj_t *ui_SettingsMainActionButton;
lv_obj_t *ui_SettingsMainActionButtonLabel;
// CUSTOM VARIABLES


// SCREEN: ui_PairingScreen
void ui_PairingScreen_screen_init(void);
void ui_event_PairingScreen( lv_event_t * e);
lv_obj_t *ui_PairingScreen;
lv_obj_t *ui_PairingContent;
lv_obj_t *ui_PairingHeader;
lv_obj_t *ui_PairingBody;
lv_obj_t *ui_PairingCode;
lv_obj_t *ui_PairingCodeLabel;
lv_obj_t *ui_PairingFooter;
void ui_event_PairingMainActionButton( lv_event_t * e);
lv_obj_t *ui_PairingMainActionButton;
lv_obj_t *ui_PairingMainActionButtonLabel;
// CUSTOM VARIABLES


// SCREEN: ui_CalibrationScreen
void ui_CalibrationScreen_screen_init(void);
void ui_event_CalibrationScreen( lv_event_t * e);
lv_obj_t *ui_CalibrationScreen;
lv_obj_t *ui_CalibrationContent;
lv_obj_t *ui_CalibrationHeader;
lv_obj_t *ui_CalibrationHeaderLabel;
lv_obj_t *ui_CalibrationBody;
lv_obj_t *ui_CalibrationStepContent;
void ui_event_ExpoSlider( lv_event_t * e);
lv_obj_t *ui_ExpoSlider;
lv_obj_t *ui_StickFlags;
lv_obj_t *ui_InvertX;
lv_obj_t *ui_InvertY;
lv_obj_t *ui_Swap_XY;
lv_obj_t *ui_CalibrationIndicatorContainer;
lv_obj_t *ui_DeadbandIndicator;
lv_obj_t *ui_CalibrationLineVert;
lv_obj_t *ui_CalibrationLineHoriz;
lv_obj_t *ui_PositionIndicatorContainer;
lv_obj_t *ui_PositionIndicatorHoriz;
lv_obj_t *ui_PositionIndicatorVert;
lv_obj_t *ui_CalibrationStepLabel;
lv_obj_t *ui_CalibrationFooter;
void ui_event_CalibrationSecondaryActionButton( lv_event_t * e);
lv_obj_t *ui_CalibrationSecondaryActionButton;
lv_obj_t *ui_CalibrationSecondaryActionButtonLabel;
void ui_event_CalibrationPrimaryActionButton( lv_event_t * e);
lv_obj_t *ui_CalibrationPrimaryActionButton;
lv_obj_t *ui_CalibrationPrimaryActionButtonLabel;
// CUSTOM VARIABLES


// SCREEN: ui_AboutScreen
void ui_AboutScreen_screen_init(void);
void ui_event_AboutScreen( lv_event_t * e);
lv_obj_t *ui_AboutScreen;
lv_obj_t *ui_AboutContent;
lv_obj_t *ui_AboutBody;
lv_obj_t *ui_VersionInfoHeaderLabel;
lv_obj_t *ui_VersionInfoLabel;
lv_obj_t *ui_DebugInfoHeaderLabel;
lv_obj_t *ui_DebugInfoLabel;
lv_obj_t *ui_AboutFooter;
void ui_event_AboutMainActionButton( lv_event_t * e);
lv_obj_t *ui_AboutMainActionButton;
lv_obj_t *ui_AboutMainActionButtonLabel;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t *ui____initial_actions0;

// IMAGES AND IMAGE SETS

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_SplashScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_SCREEN_LOADED) {
      _ui_screen_change( &ui_StatsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 1000, &ui_StatsScreen_screen_init);
}
}

void ui_event_StatsScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM  ) {
lv_indev_wait_release(lv_indev_get_act());
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 0, &ui_MenuScreen_screen_init);
}
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      stats_screen_loaded( e );
}
if ( event_code == LV_EVENT_SCREEN_UNLOADED) {
      stats_screen_unloaded( e );
}
}

void ui_event_StatsBody( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_LONG_PRESSED) {
      stat_long_press( e );
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      stat_swipe_left( e );
}
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT  ) {
lv_indev_wait_release(lv_indev_get_act());
      stat_swipe_right( e );
}
}

void ui_event_StatsFooter( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_LONG_PRESSED) {
      stats_footer_long_press( e );
}
}

void ui_event_MenuScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_SCREEN_LOADED) {
      menu_screen_loaded( e );
}
if ( event_code == LV_EVENT_SCREEN_UNLOADED) {
      menu_screen_unloaded( e );
}
}

void ui_event_MenuBackButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_StatsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_StatsScreen_screen_init);
}
}

void ui_event_MenuConnectButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      menu_connect_press( e );
}
}

void ui_event_MenuAboutButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_AboutScreen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_AboutScreen_screen_init);
}
}

void ui_event_MenuSettingsButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_SettingsScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_SettingsScreen_screen_init);
}
}

void ui_event_MenuCalibrateButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_CalibrationScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_CalibrationScreen_screen_init);
}
}

void ui_event_MenuPairButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_PairingScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_PairingScreen_screen_init);
}
}

void ui_event_MenuShutdownButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      enter_sleep_ui( e );
}
}

void ui_event_SettingsScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_SCREEN_LOADED) {
      settings_screen_loaded( e );
}
if ( event_code == LV_EVENT_SCREEN_UNLOADED) {
      settings_screen_unloaded( e );
}
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      settings_screen_load_start( e );
}
}

void ui_event_BrightnessSlider( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_VALUE_CHANGED) {
      brightness_slider_change( e );
}
}

void ui_event_AutoOffTime( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_VALUE_CHANGED) {
      auto_off_select_change( e );
}
}

void ui_event_TempUnits( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_VALUE_CHANGED) {
      temp_units_select_change( e );
}
}

void ui_event_DistanceUnits( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_VALUE_CHANGED) {
      distance_units_select_change( e );
}
}

void ui_event_ThemeColor( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_VALUE_CHANGED) {
      theme_color_picker_change( e );
}
}

void ui_event_SettingsMainActionButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_MenuScreen_screen_init);
      settings_save( e );
}
}

void ui_event_PairingScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_SCREEN_LOADED) {
      pairing_screen_loaded( e );
}
if ( event_code == LV_EVENT_SCREEN_UNLOADED) {
      pairing_screen_unloaded( e );
}
}

void ui_event_PairingMainActionButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_MenuScreen_screen_init);
}
}

void ui_event_CalibrationScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_SCREEN_LOADED) {
      calibration_screen_loaded( e );
}
if ( event_code == LV_EVENT_SCREEN_UNLOADED) {
      calibration_screen_unloaded( e );
}
}

void ui_event_ExpoSlider( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_VALUE_CHANGED) {
      expo_slider_change( e );
}
}

void ui_event_CalibrationSecondaryActionButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_MenuScreen_screen_init);
      calibration_settings_secondary_button_press( e );
}
}

void ui_event_CalibrationPrimaryActionButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      calibration_settings_primary_button_press( e );
}
}

void ui_event_AboutScreen( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_SCREEN_LOADED) {
      about_screen_loaded( e );
}
if ( event_code == LV_EVENT_SCREEN_UNLOADED) {
      about_screen_unloaded( e );
}
if ( event_code == LV_EVENT_SCREEN_LOAD_START) {
      about_screen_load_start( e );
}
}

void ui_event_AboutMainActionButton( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);

if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_MenuScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_MenuScreen_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_SplashScreen_screen_init();
ui_StatsScreen_screen_init();
ui_MenuScreen_screen_init();
ui_SettingsScreen_screen_init();
ui_PairingScreen_screen_init();
ui_CalibrationScreen_screen_init();
ui_AboutScreen_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_SplashScreen);
}
