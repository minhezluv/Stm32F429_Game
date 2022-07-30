/* USER CODE BEGIN Header */
/**
******************************************************************************
* File Name : TouchGFXConfiguration.cpp
******************************************************************************
* This file is generated by TouchGFX Generator 4.19.1.
******************************************************************************
* @attention
*
* <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
* All rights reserved.</center></h2>
*
* This software component is licensed by ST under Ultimate Liberty license
* SLA0044, the "License"; You may not use this file except in compliance with
* the License. You may obtain a copy of the License at:
* www.st.com/SLA0044
*
******************************************************************************
*/
/* USER CODE END Header */
#include <texts/TypedTextDatabase.hpp>
#include <fonts/ApplicationFontProvider.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <BitmapDatabase.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <STM32DMA.hpp>
#include <TouchGFXHAL.hpp>
#include <STM32TouchController.hpp>
#include <stm32f4xx_hal.h>
#include "cmsis_os.h"
extern "C" void touchgfx_init();
extern "C" void touchgfx_taskEntry();
extern "C" void touchgfx_components_init();

static STM32TouchController tc;
static STM32DMA dma;
static LCD16bpp display;
static ApplicationFontProvider fontProvider;
static Texts texts;
static TouchGFXHAL hal(dma, display, tc, 240, 320);
#include <platform/driver/button/ButtonController.hpp>
class MyButtonController : public touchgfx::ButtonController
{
    virtual void init()
    {
        prevState = 0x00;
    }
    virtual bool sample(uint8_t &key)
    {
        if ((HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_2) == GPIO_PIN_RESET) && prevState == 0x00)
        {

            key = 0;
            // osDelay(1);
            prevState = 0xFF;

            return true;
        }
        if ((HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_3) == GPIO_PIN_RESET) && prevState == 0x00)
        {

            key = 1;
            // osDelay(1);
            prevState = 0xFF;

            return true;
        }
        if ((HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_2) == 1) && ((HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_3) == 1)))
        {
            prevState = 0x00;
        }

        return false;
    }

private:
};
MyButtonController bc;
void touchgfx_init()
{
    Bitmap::registerBitmapDatabase(BitmapDatabase::getInstance(), BitmapDatabase::getInstanceSize());
    TypedText::registerTexts(&texts);
    Texts::setLanguage(0);

    FontManager::setFontProvider(&fontProvider);

    FrontendHeap &heap = FrontendHeap::getInstance();
    /*
     * we need to obtain the reference above to initialize the frontend heap.
     */
    (void)heap;

    /*
     * Initialize TouchGFX
     */
    hal.initialize();
    hal.setButtonController(&bc);
}

void touchgfx_components_init()
{
}

void touchgfx_taskEntry()
{
    /*
     * Main event loop. Will wait for VSYNC signal, and then process next frame. Call
     * this function from your GUI task.
     *
     * Note This function never returns
     */
    hal.taskEntry();
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
