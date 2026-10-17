#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string record;
    
    // 1. Append new record using ios::app
    ofstream fout("records.txt", ios::app);
    cout << "Enter new record to append: ";
    getline(cin, record);
    fout << record << endl;
    fout.close();

    // 2. Display all records
    ifstream fin("records.txt");
    cout << "\n--- All Records ---\n";
    while (getline(fin, record)) {
        cout << record << endl;
    }
    fin.close();

    return 0;
}
