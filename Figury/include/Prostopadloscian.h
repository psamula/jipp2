//
// Created by filip on 25.10.2021.
//

#ifndef JIPP_2_LABS_FIRSTCLASS_H
#define JIPP_2_LABS_FIRSTCLASS_H
#include <iostream>

using namespace std;

class Prostopadloscian {
private:
    float a;
    float b;
    float c;
public:
    Prostopadloscian(float a, float b, float c);
    float getSurfaceArea();
    void setA();
    void setB();
    void setC();

};


#endif //JIPP_2_LABS_FIRSTCLASS_H
