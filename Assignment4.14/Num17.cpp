#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    const int SIZE = 10;
    int productIds[SIZE] = { 1001, 1005, 1010, 1012, 1020, 1025, 1030, 1040, 1050, 1060 };

    int searchId;
    int foundIndex = -1;

    cout << "Available product IDs: ";
    for (int i = 0; i < SIZE; i++) {
        cout << productIds[i] << " ";
    }
    cout << endl;

    cout << "Enter a product ID to search for: ";
    cin >> searchId;

    int low = 0;
    int high = SIZE - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (productIds[mid] == searchId) {
            foundIndex = mid;
            break;
        }
        else if (productIds[mid] < searchId) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    // Output result
    if (foundIndex != -1) {
        cout << "Product ID " << searchId << " found at index position " << foundIndex << "." << endl;
    }
    else {
        cout << "Product ID " << searchId << " not found." << endl;
    }

    return 0;
}

