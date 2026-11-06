#include <iostream>
#include <algorithm> // For sort() and binary_search()

using namespace std;

int main() {
    // Sorted array of product IDs
    const int SIZE = 10;
    int productIds[SIZE] = { 1001, 1005, 1010, 1012, 1020, 1025, 1030, 1040, 1050, 1060 };

    int searchId;
    bool found = false;

    // (Optional) Display the available product IDs
    cout << "Available product IDs: ";
    for (int i = 0; i < SIZE; i++) {
        cout << productIds[i] << " ";
    }
    cout << endl;

    // Prompt the user for a product ID
    cout << "Enter a product ID to search for: ";
    cin >> searchId;

    // Binary search using built-in function
    found = binary_search(productIds, productIds + SIZE, searchId);

    // Output result
    if (found) {
        cout << "Product ID " << searchId << " found in the system." << endl;
    }
    else {
        cout << "Product ID " << searchId << " not found." << endl;
    }

    return 0;
}
