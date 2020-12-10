#include <mbed.h>
#include <USBSerial.h>
#include "shell.h"

DigitalOut LED(PB_1);
DigitalOut DISC(PB_9);

SHELL_PARAMETER_INT(i, "Test", 0);

int main()
{
    shell_init_usb();
    DISC = 0;

    while (true) {
        LED = 0;
        ThisThread::sleep_for(500);
        LED = 1;
        ThisThread::sleep_for(500);
    }
}
