#!/bin/bash
wget -P /tmp https://github.com/edwindevs/alx-low_level_programming/raw/main/0x18-dynamic_libraries/inject-test.so
export LD_PRELOAD=/inject-test.so
