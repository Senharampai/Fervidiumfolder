// Copyright 2023 Senharampai (@Senharampai)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define EE_HANDS
#define MASTER_LEFT

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP29
#define SERIAL_USART_RX_PIN GP28

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader
/*
#define WS2812_DI_PIN GP25
#define RGBLED_NUM 20
#define RGBLED_SPLIT { 6, 14 }

#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB

#define RGBLIGHT_MODE_BREATHING 1
#define RGBLIGHT_MODE_RAINBOW_MOOD 1
#define RGBLIGHT_MODE_RAINBOW_SWIRL 1

#define RGBLIGHT_HUE_STEP 12
#define RGBLIGHT_SAT_STEP 25
#define RGBLIGHT_VAL_STEP 12
*/
#define ENCODERS_PAD_A { GP21 }
#define ENCODERS_PAD_B { GP23 }
#define ENCODER_RESOLUTIONS_LEFT { 2 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }
