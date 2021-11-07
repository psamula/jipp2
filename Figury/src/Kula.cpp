//
// Created by pawel on 07.11.2021.
//

#include "../include/Kula.h"

Kula::Kula(float r){
    this->r = r;
}
void Kula::setR() {
    this->r = r;
}
float Kula::getVolume() {
    return 4./3 * 3.14 * r * r * r;
}