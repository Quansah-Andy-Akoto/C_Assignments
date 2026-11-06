#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> // for setprecision
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

    // Modify one August temperature to create a difference
    int dayToChange = rand() % DAYS_IN_MONTH;
    augustTemps[dayToChange] += 1;

    // Print August temperatures
    cout << "August temperatures (with one change):" << endl;
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        cout << "Day " << (i + 1) << ": " << augustTemps[i] << "°C" << endl;
    }

    // Compare arrays
    bool arraysEqual = true;
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        if (julyTemps[i] != augustTemps[i]) {
            arraysEqual = false;
            break;
        }
    }

    cout << "\nComparison result: ";
    if (arraysEqual) {
        cout << "The July and August temperature arrays are equal." << endl;
    }
    else {
        cout << "The July and August temperature arrays are NOT equal." << endl;
        cout << "(Difference found at day " << (dayToChange + 1) << ")" << endl;
    }

    // Calculate average August temperature
    double total = 0;
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        total += augustTemps[i];
    }
    double average = total / DAYS_IN_MONTH;

    cout << fixed << setprecision(2); // Format average to 2 decimal places
    cout << "\nAverage August temperature: " << average << "°C" << endl;

    // Print temperatures greater than the average
    cout << "\nTemperatures greater than the average:" << endl;
    for (int i = 0; i < DAYS_IN_MONTH; ++i) {
        if (augustTemps[i] > average) {
            cout << "Day " << (i + 1) << ": " << augustTemps[i] << "°C" << endl;
        }
    }

    return 0;
}
