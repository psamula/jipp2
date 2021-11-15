//
// Created by pawel on 15.11.2021.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H
#include <iostream>
#include <math.h>
using namespace std;
class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);
    friend double pointsDistance(Node a, Node b);

    void display();

    void updateValue(double x, double y);
};
double pointsDistance(Node a, Node b);



#endif //JIPP2_NODE_H
