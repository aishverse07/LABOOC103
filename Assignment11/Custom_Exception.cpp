// C++ program demonstrating custom exception handling using the standard exception class hierarchy.
#include <iostream>   
#include <exception>   
using namespace std;   

class MyException : public exception {   
public:   
    // Overriding the standard what() function
    const char * what() const throw() {   
        return "Attempted to divide by zero!\n";   
    }   
};   

int main() {   
    try {   
        int x, y;   
        cout << "Enter the two numbers : \n";   
        cin >> x >> y;   

        if (y == 0) {   
            MyException z;   
            throw z;   // Throwing the custom exception object
        }   
        else {   
            cout << "x / y = " << (double)x / y << endl;   
        }   
    }   
    catch(exception& e) {   
        // Catches MyException because it is a child class of exception
        cout << "Caught Exception: " << e.what();   
    }   

    return 0;
}
