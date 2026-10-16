#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function: Add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function: Add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function: Add two floats
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Addition of 2 integers (10 + 20): " << calc.add(10, 20) << endl;
    cout << "Addition of 3 integers (10 + 20 + 30): " << calc.add(10, 20, 30) << endl;
    cout << "Addition of 2 floats (5.5 + 4.3): " << calc.add(5.5f, 4.3f) << endl;

    return 0;
}
