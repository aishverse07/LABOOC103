#include <iostream>
using namespace std;

class Patient {
private:
    string name;
    double baseFee = 500.0; // Standard checkup charge

public:
    void registerPatient() {
        cout << "Enter Patient Name: ";
        cin >> name;
    }

    double calculateCharges(int extraTests) {
        return baseFee + (extraTests * 300.0); // Base fee + 300 per test
    }

    void display(int extraTests) {
        cout << "\nPatient Name: " << name;
        cout << "\nTotal Consultation Charges: RS. " << calculateCharges(extraTests) << "\n";
    }
};

int main() {
    Patient p;
    p.registerPatient();
    p.display(2); // Simulating 2 extra laboratory tests
    return 0;
}
