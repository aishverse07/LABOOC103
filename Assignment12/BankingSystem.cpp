#include <iostream>
using namespace std;

// Base Class
class Account {
public:
    string accNum = "ACC123";
    double balance = 1000.0;

    void deposit(double amt) {
        balance += amt;
        cout << "Deposited: " << amt << " | New Balance: " << balance << endl;
    }

    virtual void withdraw(double amt) {
        if (amt <= balance) {
            balance -= amt;
            cout << "Withdrew: " << amt << " | New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

// Derived Class 1
class SavingsAccount : public Account {
public:
    void addInterest() {
        double interest = balance * 0.05; // 5% interest
        balance += interest;
        cout << "Interest added: " << interest << " | New Balance: " << balance << endl;
    }
};

// Derived Class 2
class CheckingAccount : public Account {
public:
    void withdraw(double amt) override {
        if (amt <= (balance + 500)) { // 500 limit overdraft allowed
            balance -= amt;
            cout << "Withdrew (Checking): " << amt << " | New Balance: " << balance << endl;
        } else {
            cout << "Exceeded limit!" << endl;
        }
    }
};

int main() {
    cout << "--- Savings Account ---" << endl;
    SavingsAccount sa;
    sa.deposit(500);
    sa.addInterest();

    cout << "\n--- Checking Account ---" << endl;
    CheckingAccount ca;
    ca.withdraw(1200); // Exceeds balance but fits under overdraft

    return 0;
}
