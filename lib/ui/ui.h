// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_oilTemp
void ui_oilTemp_screen_init(void);
void ui_event_oilTemp(lv_event_t * e);
extern lv_obj_t * ui_oilTemp;
void ui_event_oilTempArc(lv_event_t * e);
extern lv_obj_t * ui_oilTempArc;
extern lv_obj_t * ui_oilTempNum;
// SCREEN: ui_waterTemp
void ui_waterTemp_screen_init(void);
void ui_event_waterTemp(lv_event_t * e);
extern lv_obj_t * ui_waterTemp;
void ui_event_waterTempArc(lv_event_t * e);
extern lv_obj_t * ui_waterTempArc;
extern lv_obj_t * ui_waterTempNum;
// SCREEN: ui_Boost
void ui_Boost_screen_init(void);
void ui_event_Boost(lv_event_t * e);
extern lv_obj_t * ui_Boost;
void ui_event_boostBar(lv_event_t * e);
extern lv_obj_t * ui_boostBar;
extern lv_obj_t * ui_boostPressure;




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
