#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    const int SIZE = 25;
    int numbers[SIZE];
    int userNumber, count = 0;

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random numbers between 0 and 9
    cout << "Generated array: ";
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 10;
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Ask user for a number
    cout << "Enter a number between 0 and 9: ";
    cin >> userNumber;

    // Count occurrences
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == userNumber) {
            count++;
        }
    }

    // Output result
    cout << "The number " << userNumber << " occurs " << count << " times in the array." << endl;

    return 0;
}
