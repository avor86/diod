#include <iostream>
#include <cmath>
#include "diod.h"
using namespace std;

LedDiod::LedDiod() : brightness(0), color("red") {}

void LedDiod::setColor(std::string new_color) {
    if (new_color == "red" || new_color == "green" || new_color == "blue")
    {
        color = new_color;
    }
    else
    {
        color = "red";
    }
}

void LedDiod::setBrightness(int new_brightness) {
    if (new_brightness >= 0 && new_brightness <= 100)
    {
        brightness = new_brightness;
    }
    else
    {
        brightness = 0;
    }
}

void LedDiod::showColor() {
    cout << "led color is " << color << endl;
}

void LedDiod::showBrightness() {
    cout << "led brightness is " << brightness << endl;
}
double LedDiod::calcDiodCurrent(double voltage)
{
    double Is = 10E-6;
    double VT = 26E-3;
    return Is * (exp(voltage / VT) - 1);
}