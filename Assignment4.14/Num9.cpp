#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int iMaxNo = 100;
    const double dLimit = 50000;
    const double perc1 = 0.1;
    const double perc2 = 0.15;
    const double perc3 = 0.2;

    double sales[iMaxNo], dAmount, dFee;
    int i, nr;

    // Initialize array
    for (i = 0; i < iMaxNo; i++)
        sales[i] = 0;

    // Enter salesman info
    while (cin >> nr >> dAmount) {
        if (nr < 1 || nr > iMaxNo || dAmount < 0)
            cout << "Input error" << endl;
        else
            sales[nr - 1] += dAmount;
    }

    // Print summary
    cout << endl;
    cout << "Number     Amount     Fee" << endl;
    cout << "======     ======     =======" << endl;

    for (i = 0; i < iMaxNo; i++) {
        if (sales[i] > 0) {
            if (sales[i] <= dLimit)
                dFee = perc1 * sales[i];
            else if (sales[i] <= 100000)
                dFee = perc1 * dLimit + perc2 * (sales[i] - dLimit);
            else
                dFee = perc1 * dLimit + perc2 * (100000 - dLimit) + perc3 * (sales[i] - 100000);

            cout << setw(4) << (i + 1)
                << setw(13) << fixed << setprecision(0) << sales[i]
                << setw(10) << fixed << setprecision(2) << dFee << endl;
        }
    }

    return 0;
}
