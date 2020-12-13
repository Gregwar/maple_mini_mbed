#include <mbed.h>
#include <USBSerial.h>

DigitalOut led(PB_1);
DigitalOut usbDisconnect(PB_9);

int main()
{
    USBSerial usbSerial;
    usbDisconnect = 0;

    while (true) {
        usbSerial.printf("hello\r\n");
        led = 0;
        ThisThread::sleep_for(500);
        led = 1;
        ThisThread::sleep_for(500);
    }
}
