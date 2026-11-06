#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int numProducts = 5;
    const int numProductGroups = 3;
    const int numCustomerGroups = 3;

    int productIds[numProducts] = { 101, 102, 103, 104, 105 };
    double prices[numProducts] = { 9.99, 14.50, 7.25, 19.99, 4.75 };
    int productGroups[numProducts] = { 0, 1, 2, 0, 1 }; 

    double discountMatrix[numProductGroups][numCustomerGroups] = {
        {0.05, 0.10, 0.15},
        {0.03, 0.07, 0.12},
        {0.00, 0.05, 0.10}
    };

    int inputId, quantity, custGroup;
    bool found = false;

    cout << "Enter Product ID: ";
    cin >> inputId;

    for (int i = 0; i < numProducts; i++) {
        if (productIds[i] == inputId) {
            cout << "Enter Quantity: ";
            cin >> quantity;
            cout << "Enter Customer Group (0, 1, or 2): ";
            cin >> custGroup;

            // Validating customer group
            if (custGroup < 0 || custGroup >= numCustomerGroups) {
                cout << "Invalid Customer Group!" << endl;
                return 1;
            }

            // Price Calculations
            double unitPrice = prices[i];
            int prodGroup = productGroups[i];
            double discount = discountMatrix[prodGroup][custGroup];
            double total = unitPrice * quantity;
            double finalPrice = total - (total * discount);

            cout << fixed << setprecision(2);
            cout << "\nUnit Price: $" << unitPrice << endl;
            cout << "Total Price before discount: $" << total << endl;
            cout << "Applied Discount: " << (discount * 100) << "%" << endl;
            cout << "Final Price: $" << finalPrice << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Product ID " << inputId << " not found." << endl;
    }

    return 0;
}
