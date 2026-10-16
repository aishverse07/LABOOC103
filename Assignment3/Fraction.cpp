#include <iostream>
#include <cmath> // For abs()

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    // Helper method to find Greatest Common Divisor (GCD) for simplifying
    int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return abs(a);
    }

    // Helper method to simplify the fraction
    void simplify() {
        if (denominator == 0) return; // Prevent division by zero
        
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;

        // Keep the negative sign in the numerator if the fraction is negative
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    // Constructor
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        if (den == 0) {
            denominator = 1; // Fallback to avoid error upon default initialization
        }
        simplify();
    }

    // Method to accept inputs
    void accept() {
        cout << "Enter numerator: ";
        cin >> numerator;
        do {
            cout << "Enter denominator (non-zero): ";
            cin >> denominator;
            if (denominator == 0) {
                cout << "Denominator cannot be zero! Please try again.\n";
            }
        } while (denominator == 0);
        simplify();
    }

    // Method to add two fractions
    Fraction add(const Fraction &f) {
        int newNum = (numerator * f.denominator) + (f.numerator * denominator);
        int newDen = denominator * f.denominator;
        return Fraction(newNum, newDen);
    }

    // Method to subtract two fractions
    Fraction subtract(const Fraction &f) {
        int newNum = (numerator * f.denominator) - (f.numerator * denominator);
        int newDen = denominator * f.denominator;
        return Fraction(newNum, newDen);
    }

    // Method to display the fraction
    void display() const {
        if (denominator == 1) {
            cout << numerator << endl; // Just print the integer if denominator is 1
        } else {
            cout << numerator << "/" << denominator << endl;
        }
    }
};

int main() {
    Fraction f1, f2;

    cout << "--- Enter First Fraction ---\n";
    f1.accept();

    cout << "\n--- Enter Second Fraction ---\n";
    f2.accept();

    Fraction sum = f1.add(f2);
    Fraction diff = f1.subtract(f2);

    cout << "\n--- Results (Simplified Form) ---\n";
    cout << "First Fraction: "; f1.display();
    cout << "Second Fraction: "; f2.display();
    cout << "Addition: "; sum.display();
    cout << "Subtraction: "; diff.display();

    return 0;
}
