#include "mydeviceui.h"
#include <iostream>

using namespace std;

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse();
    objectTouchPad = new DeviceTouchPad();
    objectDeviceDisplay = new DeviceDisplay();
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu()
{
    int choice;
    do {
        cout << "DEVICE MENU" << endl;
        cout << "-----------------" << endl;
        cout << "1: Set Mouse Information" << endl;
        cout << "2: Set Touch Pad Information" << endl;
        cout << "3: Set Display Information" << endl;
        cout << "4: Show Devices Information" << endl;
        cout << "5: Finish" << endl;
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {
        case 1:
            uiSetMouseInformation();
            break;
        case 2:
            uiSetTouchInformation();
            break;
        case 3:
            uiSetDisplayInformation();
            break;
        case 4:
            uiShowDeviceInformation();
            break;
        case 5:
            cout << "Finishing..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 5);
}

void MyDeviceUI::uiSetMouseInformation()
{
    short id, button;
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "----------------------------------" << endl;
    cout << "Set Mouse Device ID: ";
    cin >> id;
    objectDeviceMouse->setDeviceID(id);
    cout << "Set Mouse Primary Button (1 for left, 2 for right): ";
    cin >> button;
    objectDeviceMouse->setPrimaryButton(button);
    cout << "Mouse information set successfully." << endl;
}

void MyDeviceUI::uiSetTouchInformation()
{
    short id, sensitivity;
    cout << "SET TOUCH PAD INFORMATION" << endl;
    cout << "----------------------------------" << endl;
    cout << "Set Touch Pad Device ID: ";
    cin >> id;
    objectTouchPad->setDeviceID(id);
    cout << "Set Touch Pad Sensitivity (1-5): ";
    cin >> sensitivity;
    objectTouchPad->setTouchPadSensitivity(sensitivity);
    cout << "Touch Pad information set successfully." << endl;
}

void MyDeviceUI::uiSetDisplayInformation()
{
    short id, resolution;
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "----------------------------------" << endl;
    cout << "Set Display Device ID: ";
    cin >> id;
    objectDeviceDisplay->setDeviceID(id);
    cout << "Set Display Resolution (1-10): ";
    cin >> resolution;
    objectDeviceDisplay->setDisplayResolution(resolution);
    cout << "Display information set successfully." << endl;
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "SHOW DEVICES INFORMATION" << endl;
    cout << "----------------------------------" << endl;
    cout << "Mouse Information:" << endl;
    cout << "Device ID: " << objectDeviceMouse->getDeviceID() << endl;
    cout << "Primary Button: " << objectDeviceMouse->getPrimaryButton() << endl;
    cout << endl;
    cout << "Touch Pad Information:" << endl;
    cout << "Device ID: " << objectTouchPad->getDeviceID() << endl;
    cout << "Sensitivity: " << objectTouchPad->getTouchPadSensitivity() << endl;
    cout << endl;
    cout << "Display Information:" << endl;
    cout << "Device ID: " << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Resolution: " << objectDeviceDisplay->getDisplayResolution() << endl;
}
