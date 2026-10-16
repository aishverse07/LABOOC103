#include <iostream>
using namespace std;

class MobileRecharge {
private:
    string mobileNumber;
    double balance = 0.0;

public:
    MobileRecharge(string num, double initialBal) : mobileNumber(num), balance(initialBal) {}

    void recharge(double amount) {
        balance += amount;
        cout << "Recharged RS. " << amount << " successfully.\n";
    }

    void deductBalance(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Deducted RS. " << amount << " for usage.\n";
        } else {
            cout << "Insufficient balance to place call/data usage!\n";
        }
    }

    void display() const {
        cout << "Mobile: " << mobileNumber << " | Current Balance: RS. " << balance << "\n";
    }
};

int main() {
    MobileRecharge sim("9876543210", 100.0);
    sim.display();
    sim.recharge(200);
    sim.deductBalance(50);
    sim.display();
    return 0;
}
