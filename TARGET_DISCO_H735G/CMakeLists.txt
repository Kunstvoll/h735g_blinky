# Copyright (c) 2022 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(mbed-disco-h735g INTERFACE)

target_sources(mbed-disco-h735g
    INTERFACE
        PeripheralPins.c
)

target_include_directories(mbed-disco-h735g
    INTERFACE
        .
)

target_link_libraries(mbed-disco-h735g INTERFACE mbed-stm32h735xg)
