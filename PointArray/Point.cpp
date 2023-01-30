#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int _x, int _y) : x{_x}, y{_y} {}

void Point::setX(int x){
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

int Point::getX() const {
    return this->x;
}

int Point::getY() const{
    return this->y;
}

void Point::print() const {
    cout << "(" << x << ", " << y << ")";
}
