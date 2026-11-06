#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int DAYS_IN_MONTH = 31;
    int julyTemps[DAYS_IN_MONTH];
    int augustTemps[DAYS_IN_MONTH];

    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate random temperatures for July (15–25 degrees)
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        julyTemps[i] = 15 + rand() % 11; // 15 to 25
    }

    // Copy July temperatures to August
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        augustTemps[i] = julyTemps[i];
    }

    // Modify one of the August temperatures to make the arrays different
    int dayToChange = rand() % DAYS_IN_MONTH; // Random day between 0 and 30
    augustTemps[dayToChange] += 1; // Increment by 1 (could go outside range)

    // Print August temperatures
    cout << "August temperatures (copied from July, with one changed):" << endl;
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        cout << "Day " << (i + 1) << ": " << augustTemps[i] << "°C" << endl;
    }

    // Compare July and August arrays
    bool arraysEqual = true;
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        if (julyTemps[i] != augustTemps[i]) {
            arraysEqual = false;
            break;
        }
    }

    // Output result
    cout << "\nComparison result: ";
    if (arraysEqual) {
        cout << "The July and August temperature arrays are equal." << endl;
    }
    else {
        cout << "The July and August temperature arrays are NOT equal." << endl;
        cout << "(Difference found at day " << (dayToChange + 1) << ")" << endl;
    }

    return 0;
}
