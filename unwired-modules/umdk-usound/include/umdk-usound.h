/*
 * Copyright (C) 2017 Unwired Devices [info@unwds.com]
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    
 * @ingroup     
 * @brief       
 * @{
 * @file        umdk-usound.h
 * @brief       umdk-usound driver module definitions
 * @author      Dmitry Golik
 */
#ifndef UMDK_USOUND_H
#define UMDK_USOUND_H

#include "unwds-common.h"

#define UMDK_USOUND_PUBLISH_PERIOD_MIN 1

#define UMDK_USOUND_STACK_SIZE 2048

#define UMDK_USOUND_PWREN       GPIO_PIN(PORT_B, 1)
#define UMDK_USOUND_ADC_PIN     GPIO_PIN(PORT_A, 5)
#define UMDK_USOUND_ADC_CH      5
#define UMDK_USOUND_SILENCE_PIN GPIO_PIN(PORT_A, 2)
#define UMDK_USOUND_BEEP_PIN    GPIO_PIN(PORT_A, 3)
#define UMDK_USOUND_DISRUPT_PIN GPIO_PIN(PORT_A, 4)


typedef enum {
    UMDK_USOUND_CMD_SET_PERIOD = 0,
    UMDK_USOUND_CMD_POLL = 1,
    UMDK_USOUND_CMD_INIT_SENSOR = 2,
} umdk_usound_cmd_t;

typedef enum {
    UMDK_SOUND_MODE_DISTANCE = 0,
    UMDK_SOUND_MODE_THRESHOLD = 1,
} umdk_sound_mode_t;

void umdk_usound_init(uint32_t *non_gpio_pin_map, uwnds_cb_t *event_callback);
bool umdk_usound_cmd(module_data_t *data, module_data_t *reply);

#endif /* UMDK_USOUND_H */
