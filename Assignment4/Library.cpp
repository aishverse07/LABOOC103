#include <iostream>
using namespace std;

class LibraryBook {
private:
    string title;
    bool isIssued = false;

public:
    LibraryBook(string t) : title(t) {}

    void issueBook() {
        if (!isIssued) { isIssued = true; cout << title << " issued successfully.\n"; }
        else cout << title << " is already issued!\n";
    }

    void returnBook() {
        if (isIssued) { isIssued = false; cout << title << " returned successfully.\n"; }
        else cout << title << " was not issued!\n";
    }

    void display() const {
        cout << "Book: " << title << " | Status: " << (isIssued ? "Issued" : "Available") << "\n";
    }
};

int main() {
    LibraryBook b("Object Oriented Programming");
    b.display();
    b.issueBook();
    b.returnBook();
    return 0;
}
