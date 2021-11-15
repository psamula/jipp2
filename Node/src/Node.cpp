//
// Created by pawel on 15.11.2021.
//

#include "Node.h"

double pointsDistance(Node a, Node b) {
    double xDistance = pow((a.x - b.x), 2);
    double yDistance = pow((a.y - b.y), 2);
    return sqrt(xDistance + yDistance);
}

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}