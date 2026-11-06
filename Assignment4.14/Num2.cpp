#include <iostream>
using namespace std;

int main() {
    // Array with the number of days in each month (non-leap year)
    const int iDaysInM[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int month;
    cout << "Enter month number (1–12): ";
    cin >> month;

    if (month >= 1 && month <= 12) {
        cout << "Number of days in month " << month << ": " << iDaysInM[month - 1] << endl;
    }
    else {
        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
