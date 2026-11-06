#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
#include <algorithm> // for sort()

using namespace std;

int main() {
    const int SIZE = 10;
    int diceRolls[SIZE];

    // Seed the random number generator
    srand(time(0));

    // Generate 10 random dice rolls (1-6)
    cout << "Original dice rolls: ";
    for (int i = 0; i < SIZE; i++) {
        diceRolls[i] = (rand() % 6) + 1;
        cout << diceRolls[i] << " ";
    }

    // Sort the array
    sort(diceRolls, diceRolls + SIZE);

    // Print the sorted array
    cout << "\nSorted dice rolls:   ";
    for (int i = 0; i < SIZE; i++) {
        cout << diceRolls[i] << " ";
    }

    cout << endl;
    return 0;
}
