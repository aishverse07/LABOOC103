#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;
public:
    Employee(double sal) : salary(sal) {}
    virtual double calculateBonus() { return salary * 0.10; } // Default 10%
};

class Manager : public Employee {
public:
    Manager(double sal) : Employee(sal) {}
    double calculateBonus() override { return salary * 0.25; } // Manager 25%
};

class Developer : public Employee {
public:
    Developer(double sal) : Employee(sal) {}
    double calculateBonus() override { return salary * 0.15; } // Developer 15%
};

int main() {
    Employee* emp;

    Manager m(80000);
    emp = &m;
    cout << "Manager Bonus: " << emp->calculateBonus() << endl;

    Developer d(60000);
    emp = &d;
    cout << "Developer Bonus: " << emp->calculateBonus() << endl;

    return 0;
}
