import sys
import os
Import("env")

uploader = '$UPLOADER'

if sys.platform != 'win32' and os.path.exists('dfu-util'):
    uploader = './dfu-util'

# DFU util to program the Maple Mini
env.Replace(
    UPLOADER='dfu-util',
    UPLOADCMD=uploader+' -a 1 -D $SOURCE -R'
)
