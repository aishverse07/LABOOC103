#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point() : x(0), y(0) {}

    // Overloading extraction operator for input
    friend istream& operator>>(istream& in, Point& p) {
        cout << "Enter X and Y: ";
        in >> p.x >> p.y;
        return in;
    }

    // Overloading insertion operator for output
    friend ostream& operator<<(ostream& out, const Point& p) {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }
};

int main() {
    Point p1;
    cin >> p1;
    cout << "The point is: " << p1 << "\n";
    return 0;
}
