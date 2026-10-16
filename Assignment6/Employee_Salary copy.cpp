#include <iostream>
using namespace std;

class Employee {
public:
    // Overloaded function: Basic Salary only
    double calculateSalary(double basic) {
        return basic;
    }

    // Overloaded function: Basic Salary + HRA
    double calculateSalary(double basic, double hra) {
        return basic + hra;
    }

    // Overloaded function: Basic Salary + HRA + DA
    double calculateSalary(double basic, double hra, double da) {
        return basic + hra + da;
    }
};

int main() {
    Employee emp;
    double basic = 30000.0, hra = 5000.0, da = 2000.0;

    cout << "Salary (Basic only): Rs. " << emp.calculateSalary(basic) << endl;
    cout << "Salary (Basic + HRA): Rs. " << emp.calculateSalary(basic, hra) << endl;
    cout << "Salary (Basic + HRA + DA): Rs. " << emp.calculateSalary(basic, hra, da) << endl;

    return 0;
}
