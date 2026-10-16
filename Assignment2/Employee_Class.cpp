#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empID;
    string empName, department;
    float basicSalary;

public:
    void acceptDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        getline(cin >> ws, empName);

        cout << "Enter Department: ";
        getline(cin >> ws, department);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    float calculateAnnualSalary()
    {
        return basicSalary * 12;
    }

    void displayDetails()
    {
        cout << "\n--- Employee Details ---\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Department: " << department << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Annual Salary: " << calculateAnnualSalary() << endl;
    }
};

int main()
{
    Employee e;

    e.acceptDetails();
    e.displayDetails();

    return 0;
}