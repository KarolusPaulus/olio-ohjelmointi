#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"

using namespace std;

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
private:
    DeviceMouse *objectDeviceMouse;
    DeviceTouchPad *objectTouchPad;
    DeviceDisplay *objectDeviceDisplay;
};

#endif // MYDEVICEUI_H