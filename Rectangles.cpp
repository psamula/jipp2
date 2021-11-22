//
// Created by student on 2021-11-22.
//

#include "C:/Users/student/CLionProjects/psgit/Figures/include/Figures.h"

Rectangles::Rectangles(float a, float b) {
    this->a = a;
    this->b = b;
}

double Rectangles::getSurfaceArea() {
    return a * b;
}
double Rectangles::getCircuit() {
    return 2 * a + 2 * b;
}

