#!/bin/bash
wget -P /tmp https://github.com/KwameNtaadu007/alx-low_level_programming/blob/master/0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so
