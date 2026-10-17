#include <iostream>
using namespace std;

// Abstract Base Class
class Vehicle {
public:
    virtual void start() = 0; // Pure virtual functions
    virtual void stop() = 0;
};

class Car : public Vehicle {
public:
    void start() override { cout << "Car started.\n"; }
    void stop() override { cout << "Car stopped.\n"; }
};

class Bike : public Vehicle {
public:
    void start() override { cout << "Bike started.\n"; }
    void stop() override { cout << "Bike stopped.\n"; }
};

int main() {
    Vehicle* v;

    Car c;
    v = &c;
    v->start(); v->stop();

    Bike b;
    v = &b;
    v->start(); v->stop();

    return 0;
}
