#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream fin("sample.txt");
    if (!fin) { cout << "File error!"; return 1; }

    string line, word;
    int lines = 0, words = 0, characters = 0;

    while (getline(fin, line)) {
        lines++;
        characters += line.length() + 1; // +1 for newline character
        
        stringstream ss(line);
        while (ss >> word) words++;
    }
    fin.close();

    cout << "Lines: " << lines << "\nWords: " << words << "\nCharacters: " << characters << endl;
    return 0;
}
