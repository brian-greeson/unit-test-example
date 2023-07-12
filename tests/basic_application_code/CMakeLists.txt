
# Copyright (c) 2021, Legrand North America, LLC.
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr COMPONENTS unittest REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(unit-tests)

target_include_directories(testbinary PRIVATE ../../app/src/include)


FILE(GLOB app_sources src/*.c)
target_sources(testbinary PRIVATE 
${app_sources}
../../app/src/my_custom_code.c
../../app/src/my_custom_application_code.c
)