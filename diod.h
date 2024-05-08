#ifndef DIOD_H
#define DIOD_H

class LedDiod {
private:
    int brightness; 
    std::string color;

public:
    LedDiod();

    void setColor(std::string new_color);
    void setBrightness(int new_brightness);
    void showColor() ;
    void showBrightness();
    double calcDiodCurrent(double voltage);
};

#endif 
