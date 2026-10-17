// C++ program to demonstrate the use of try, catch and throw in exception handling.
#include <iostream>
using namespace std;

double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero condition!";
    }
    return ((double)a / b); // Casted to double for precise division
}

int main () {
    int x = 50;
    int y = 0;
    double z = 0;

    try {
        z = division(x, y);
        cout << "Result: " << z << endl;
    } 
    catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
