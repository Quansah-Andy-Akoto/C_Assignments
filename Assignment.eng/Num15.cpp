#include<iostream>
using namespace std;

int main() {
	double u, s;
	cout << "Enter to values: \n";
	cin >> u >> s;
	double larger = (u > s) ? u : s;
	cout << "The larger value is " << larger << endl;

	return 0;
}