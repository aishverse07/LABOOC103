#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    // 1. Default Constructor
    Box() : length(1), width(1), height(1) { cout << "Default Constructor called.\n"; }

    // 2. Parameterized Constructor
    Box(double l, double w, double h) : length(l), width(w), height(h) { 
        cout << "Parameterized Constructor called.\n"; 
    }

    // 3. Copy Constructor
    Box(const Box &b) : length(b.length), width(b.width), height(b.height) { 
        cout << "Copy Constructor called.\n"; 
    }

    // Destructor
    ~Box() { cout << "Box object destroyed.\n"; }

    double calculateVolume() const { return length * width * height; }

    void display() const {
        cout << "Dimensions: " << length << "x" << width << "x" << height 
             << " | Volume: " << calculateVolume() << "\n\n";
    }
};

int main() {
    Box b1;            // Invokes Default
    b1.display();

    Box b2(3, 4, 5);   // Invokes Parameterized
    b2.display();

    Box b3 = b2;       // Invokes Copy
    b3.display();

    return 0;
}
