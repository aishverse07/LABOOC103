#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double basicSalary;

public:
    // Constructor
    Employee(int i, string n, double basic) : id(i), name(n), basicSalary(basic) {}

    // Destructor
    ~Employee() {
        cout << "Employee object for " << name << " destroyed.\n";
    }

    // Method to calculate Gross Salary (HRA = 20%, DA = 50% of Basic)
    double calculateGross() const {
        double hra = 0.20 * basicSalary;
        double da = 0.50 * basicSalary;
        return basicSalary + hra + da;
    }

    // Display details
    void display() const {
        cout << "ID: " << id << " | Name: " << name 
             << " | Gross Salary: RS. " << calculateGross() << "\n";
    }
};

int main() {
    Employee emp(101, "Amit Shinde", 30000.0);
    emp.display();
    return 0;
}
