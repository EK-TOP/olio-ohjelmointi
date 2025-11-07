#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double height, double width);
    ~Rectangle();

    void printTangle() const;

    void setWidth(double w);
    void setHeight(double h);

    double getArea() const;
    double getCircum() const;
};

#endif
