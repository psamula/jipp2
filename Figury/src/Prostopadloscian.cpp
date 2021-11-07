//
// Created by filip on 25.10.2021.
//

#include "../include/Prostopadloscian.h"

Prostopadloscian::Prostopadloscian(float a, float b, float c){
    this->a = a;
    this->b = b;
    this->c = c;
}

void Prostopadloscian::setA() {
    this->a = a;
}
void Prostopadloscian::setB() {
    this->b = b;
}
void Prostopadloscian::setC() {
    this->c = c;
}
float Prostopadloscian::getSurfaceArea() {
    return 2 * a * b + 2 * a * c + 2 * b * c;
}
