#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productID, quantity;
    string productName;
    float unitPrice;

public:
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        getline(cin >> ws, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    float calculateTotalCost()
    {
        return quantity * unitPrice;
    }

    void displayDetails()
    {
        cout << "\n--- Product Details ---\n";
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unitPrice << endl;
        cout << "Total Cost: " << calculateTotalCost() << endl;
    }
};

int main()
{
    Product p;

    p.acceptDetails();
    p.displayDetails();

    return 0;
}