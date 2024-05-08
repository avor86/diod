#ifndef DIOD_H
#define DIOD_H

#include <string>

class LedDiod {
private:
    int brightness; 
    std::string color;

public:
    LedDiod();

    void setColor(std::string color);
    void setBrightness(int br);
    void showColor() ;
    void showBrightness();
    double calcDiodCurrent(double voltage);
};

#endif 