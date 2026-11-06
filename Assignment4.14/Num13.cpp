#include <iostream>

using namespace std;

int main() {
    // Product IDs and their prices
    const int numProducts = 5;
    int productIds[numProducts] = { 101, 102, 103, 104, 105 };
    double prices[numProducts] = { 9.99, 14.50, 7.25, 19.99, 4.75 };

    int inputId;
    int quantity;
    bool found = false;

    cout << "Enter Product ID: ";
    cin >> inputId;

    // Search for the product ID
    for (int i = 0; i < numProducts; i++) {
        if (productIds[i] == inputId) {
            cout << "Enter Quantity: ";
            cin >> quantity;

            double totalPrice = quantity * prices[i];

            cout << "Unit Price: $" << prices[i] << endl;
            cout << "Total Price for " << quantity << " unit(s): $" << totalPrice << endl;
            found = true;
            break;
        }
    }

    // Product not found message
    if (!found) {
        cout << "Product ID " << inputId << " not found." << endl;
    }

    return 0;
}
