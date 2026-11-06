#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>  // for abs()

using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    // Read 10 integers
    cout << "Enter 10 integers (positive or negative):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // a) Print the first, fifth, and tenth item
    cout << "\n(a) First, Fifth, and Tenth items:" << endl;
    cout << "First item: " << numbers[0] << endl;
    cout << "Fifth item: " << numbers[4] << endl;
    cout << "Tenth item: " << numbers[9] << endl;

    // b) Sum of all items
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i];
    }
    cout << "\n(b) Sum of all items: " << sum << endl;

    // c) Print numbers in reversed order
    cout << "\n(c) Numbers in reversed order:" << endl;
    for (int i = SIZE - 1; i >= 0; --i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // d) Change negative to positive and print
    cout << "\n(d) All numbers with negative values turned positive:" << endl;
