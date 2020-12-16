import sys
import os
Import("env")

# DFU util to program the Maple Mini
env.Replace(
    UPLOADER='dfu-util',
    UPLOADCMD='$UPLOADER -a 1 -D $SOURCE -R'
)
