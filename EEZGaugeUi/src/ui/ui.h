#ifndef EEZ_LVGL_UI_GUI_H
#define EEZ_LVGL_UI_GUI_H

#include <lvgl.h>
#include "screens.h"
#include "vars.h"

#ifdef __cplusplus
extern "C" {
#endif

void ui_init();
void ui_tick();

void loadScreen(enum ScreensEnum screenId);

void resetCoolantMinMax(int32_t value);
void updateCoolantMinMax(int32_t minValue, int32_t maxValue);
void updateCoolantScr(int32_t value);

void updateBoostArc(int32_t value);
void updateBoostLabel(int32_t value);

void updateIatArc(int32_t value);
void updateIatLabel(int32_t value);

void updateVoltageArc(float value);
void updateVoltageLabel(float value);

void setCanState(bool canState);


#ifdef __cplusplus
}
#endif

#endif // EEZ_LVGL_UI_GUI_H