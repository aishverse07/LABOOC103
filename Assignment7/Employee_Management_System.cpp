#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id; string name, dept;
public:
    void getEmp() {
        cout << "\nEnter ID: "; cin >> id; cin.ignore();
        cout << "Enter Name: "; getline(cin, name);
        cout << "Enter Dept: "; getline(cin, dept);
    }
    void showEmp() { cout << "\nID: " << id << "\nName: " << name << "\nDept: " << dept; }
};

class TeachingStaff : public Employee {
    string subject, qual;
public:
    void getData() { getEmp(); cout << "Subject: "; getline(cin, subject); cout << "Qual: "; getline(cin, qual); }
    void showData() { showEmp(); cout << "\nSubject: " << subject << "\nQual: " << qual << "\n"; }
};

class NonTeachingStaff : public Employee {
    string desig; int hours;
public:
    void getData() { getEmp(); cout << "Designation: "; getline(cin, desig); cout << "Hours: "; cin >> hours; }
    void showData() { showEmp(); cout << "\nDesignation: " << desig << "\nHours: " << hours << "\n"; }
};

int main() {
    TeachingStaff t;
    NonTeachingStaff nt;
    
    cout << "--- Teaching Staff Input ---"; t.getData();
    cout << "\n--- Non-Teaching Staff Input ---"; nt.getData();
    
    cout << "\n=== DISPLAYING DETAILS ===";
    t.showData();
    nt.showData();
    return 0;
}

