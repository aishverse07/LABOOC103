#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

// Abstract Base Class
class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

// Derived Circle Class
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() const override { return PI * radius * radius; }
    double calculatePerimeter() const override { return 2 * PI * radius; }
};

// Derived Rectangle Class
class Rectangle : public Shape {
    double len, wid;
public:
    Rectangle(double l, double w) : len(l), wid(w) {}
    double calculateArea() const override { return len * wid; }
    double calculatePerimeter() const override { return 2 * (len + wid); }
};

// Derived Triangle Class
class Triangle : public Shape {
    double s1, s2, s3;
public:
    Triangle(double a, double b, double c) : s1(a), s2(b), s3(c) {}
    double calculateArea() const override {
        double s = (s1 + s2 + s3) / 2;
        return sqrt(s * (s - s1) * (s - s2) * (s - s3)); // Heron's Formula
    }
    double calculatePerimeter() const override { return s1 + s2 + s3; }
};

int main() {
    Circle c(7.0);
    Rectangle r(4.2, 8.0);
    Triangle t(4.0, 4.0, 3.2);

    cout << "Circle:\nArea: " << c.calculateArea() << "\nPerimeter: " << c.calculatePerimeter() << "\n\n";
    cout << "Rectangle:\nArea: " << r.calculateArea() << "\nPerimeter: " << r.calculatePerimeter() << "\n\n";
    cout << "Triangle:\nArea: " << t.calculateArea() << "\nPerimeter: " << t.calculatePerimeter() << "\n";

    return 0;
}
