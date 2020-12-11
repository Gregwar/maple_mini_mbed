Import("env")

# DFU util to program the Maple Mini
env.Replace(
    UPLOADER='dfu-util',
    UPLOADCMD='$UPLOADER -d 1EAF:0003 -a 1 -D $SOURCE -R'
)
