/**
 * @file fsmc_ssd1963.h
 *
 */

#ifndef TFT_FSMC_SSD1963_DRV_H
#define TFT_FSMC_SSD1963_DRV_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
// #ifndef LV_DRV_NO_CONF
//     #ifdef LV_CONF_INCLUDE_SIMPLE
//         #include "lv_drv_conf.h"
//     #else
//         #include "../../lv_drv_conf.h"
//     #endif
// #endif

#if USE_FSMC_SSD1963 > 0

    #ifdef LV_LVGL_H_INCLUDE_SIMPLE
        #include "lvgl.h"
    #else
        #include "lvgl/lvgl.h"
    #endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void fsmc_ssd1963_init(uint8_t rotation, bool invert_display);
void fsmc_ssd1963_flush(lv_disp_drv_t * disp, const lv_area_t * area, lv_color_t * color_p);
    // void fsmc_ili9341_flush(int32_t x1, int32_t y1, int32_t x2, int32_t y2,  lv_color_t * color_p);
    // void fsmc_ili9341_fill(int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t color);
    // void fsmc_ili9341_map(int32_t x1, int32_t y1, int32_t x2, int32_t y2, lv_color_t * color_p);
    /**********************
     *      MACROS
     **********************/

#endif /* USE_FSMC_ILI9341 */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* TFT_FSMC_ILI9341_DRV_H */
