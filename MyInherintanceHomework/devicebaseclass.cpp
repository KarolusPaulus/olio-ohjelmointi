#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{
    // Constructor
}

void DeviceBaseClass::setDeviceID(short id)
{
    deviceID = id;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
