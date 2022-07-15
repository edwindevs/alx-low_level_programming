#!/bin/bash
wget -P /tmp https://github.com/edwindevs/alx-low_level_programming/raw/master/0x18-dynamic_libraries/0x18.c/libtest.so
export LD_PRELOAD=/libtest.so
