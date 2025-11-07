#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle() : width(0.0), height(0.0) {}
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

void Rectangle::setWidth(double w)  { width = w; }
void Rectangle::setHeight(double h) { height = h; }
double Rectangle::getArea()   const { return width * height; }
double Rectangle::getCircum() const { return 2 * (width + height); }

void Rectangle::printTangle() const {
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << getArea() << std::endl;
    std::cout << "Circumference: " << getCircum() << std::endl;
};
Rectangle::~Rectangle() {
    std::cout << "Rectangle object (" << width << " x " << height << ") deleted." << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
}

