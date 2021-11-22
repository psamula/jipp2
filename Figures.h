//
// Created by student on 2021-11-22.
//

#ifndef PSGIT_FIGURES_H
#define PSGIT_FIGURES_H
#include <string.h>
#include <iostream>
using namespace std;


class Figures {
public:
    Figures(const string &name, const string &color);

private:
    string name;
    string color;
};

class Rectangles : public Figures {
public:
    Rectangles(float a, float b);

    float getSurfaceArea();

    float getCircuit();

private:
    float a;
    float b;
};



#endif //PSGIT_FIGURES_H
