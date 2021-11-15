//
// Created by pawel on 15.11.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H
#include <iostream>
#include <math.h>

using namespace std;

class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    friend void print(const Vector &vector);

    friend Vector operator+(const double &lhs, const Vector &rhs);

    Vector operator+(const Vector &rhs);

    Vector operator+(const double &rhs);
};


#endif //JIPP2_VECTOR_H
