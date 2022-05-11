/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


int main()
{
    DigitalOut led_1(LED1,1);
    DigitalOut led_2(LED2,1);

    DigitalOut led_3(LED3,1);


    while (true) {
        led_1.write(1);
        led_2.write(1);
        led_3.write(1);
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
