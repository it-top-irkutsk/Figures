#pragma once

using namespace std;

class Figure {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Square : public Figure{
private:
    double _side;
public:
    Square(double side) {
        _side = side;
    }

    double area() override {
        return _side * _side;
    }
    double perimeter() override {
        return _side * 4;
    }
};

class Circle : public Figure {
private:
    double _radius;

public:
    const double PI = 3.14;

    Circle(double radius) : _radius(radius) {}

    double area() override {
        return PI * _radius * _radius;
    }

    double perimeter() override {
        return 2 * PI * _radius;
    }
};
