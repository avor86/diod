#include <iostream>
#include "diod.h"
using namespace std;
int main()
{
    LedDiod led;
    led.setColor("blue");
    led.showColor();
    led.setColor("white");
    led.showColor();
    led.setBrightness(23);
    led.showBrightness();
    led.setBrightness(141);
    led.showBrightness();
    cout << led.calcDiodCurrent(1);
}

