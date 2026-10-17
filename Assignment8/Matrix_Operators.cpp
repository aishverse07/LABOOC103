#include <iostream>
using namespace std;

class Matrix {
public:
    int m[2][2];

    void input() { for(int i=0; i<2; i++) for(int j=0; j<2; j++) cin >> m[i][j]; }
    void show() { for(int i=0; i<2; i++) { for(int j=0; j<2; j++) cout << m[i][j] << " "; cout << "\n"; } }

    Matrix operator+(Matrix& o) {
        Matrix r;
        for(int i=0; i<2; i++) for(int j=0; j<2; j++) r.m[i][j] = m[i][j] + o.m[i][j];
        return r;
    }
    Matrix operator-(Matrix& o) {
        Matrix r;
        for(int i=0; i<2; i++) for(int j=0; j<2; j++) r.m[i][j] = m[i][j] - o.m[i][j];
        return r;
    }
    bool operator==(Matrix& o) {
        for(int i=0; i<2; i++) for(int j=0; j<2; j++) if(m[i][j] != o.m[i][j]) return false;
        return true;
    }
};

int main() {
    Matrix m1, m2;
    cout << "Enter Matrix 1 (2x2):\n"; m1.input();
    cout << "Enter Matrix 2 (2x2):\n"; m2.input();

    Matrix add = m1 + m2, sub = m1 - m2;
    cout << "\nAddition:\n"; add.show();
    cout << "\nSubtraction:\n"; sub.show();
    cout << "\nMatrices are " << (m1 == m2 ? "Equal" : "Not Equal") << "\n";
    return 0;
}
