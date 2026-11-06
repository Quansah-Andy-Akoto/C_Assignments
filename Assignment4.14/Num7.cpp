#include <iostream>
using namespace std;

int main() {
    // Declare the array of densities
    double densities[9] = {
        1.5, 2.8, 4.6,
        5.7, 7.9, 8.3,
        8.6, 8.8, 8.9
    };

    double inputDensity;
    double closestBelow = -1;  // initialize with an invalid value

    // Prompt user for input
    cout << "Enter a density value: ";
    cin >> inputDensity;

    // Search for the closest density below the entered value
    for (int i = 0; i < 9; ++i) {
        if (densities[i] < inputDensity) {
            if (closestBelow == -1 || densities[i] > closestBelow) {
                closestBelow = densities[i];
            }
        }
    }

    // Output result
    if (closestBelow == -1) {
        cout << "No density found below the entered value." << endl;
    }
    else {
        cout << "Closest density below " << inputDensity << " is: " << closestBelow << endl;
    }

    return 0;
}
