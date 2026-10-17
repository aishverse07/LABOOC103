#include <iostream>
#include <exception>
using namespace std;

// Custom Exception Class
class InvalidMarksException : public exception {
public:
    const char* what() const throw() {
        return "Error: Marks must be between 0 and 100!";
    }
};

int main() {
    int marks;
    cout << "Enter student marks: ";
    cin >> marks;

    try {
        if (marks < 0 || marks > 100) {
            throw InvalidMarksException();
        }
        cout << "Valid marks entered: " << marks << endl;
    } 
    catch (exception& e) {
        cerr << e.what() << endl;
    }
    return 0;
}
