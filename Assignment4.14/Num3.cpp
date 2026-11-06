#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int DAYS_IN_MONTH = 31;
    int julyTemps[DAYS_IN_MONTH];
    int augustTemps[DAYS_IN_MONTH];

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate random temperatures for July (15–25 degrees)
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        julyTemps[i] = 15 + rand() % 11; // random number between 15 and 25
    }

    // Copy July temperatures to August
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        augustTemps[i] = julyTemps[i];
    }

    // Print August temperatures
    cout << "August temperatures (copied from July):" << endl;
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        cout << "Day " << (i + 1) << ": " << augustTemps[i] << "°C" << endl;
    }

    return 0;
}
