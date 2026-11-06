#include <iostream>

using namespace std;

int main() {
    const int numProducts = 5;
    int productIds[numProducts] = { 101, 102, 103, 104, 105 };
    double prices[numProducts] = { 9.99, 14.50, 7.25, 19.99, 4.75 };

    int inputId;
    bool found = false;

    cout << "Enter Product ID: ";
    cin >> inputId;

    for (int i = 0; i < numProducts; i++) {
        if (productIds[i] == inputId) {
            cout << "Price of product " << inputId << " is $" << prices[i] << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Product ID " << inputId << " not found." << endl;
    }

    return 0;
}
