//Checking Equality Among 3 Intergers
#include<iostream>	
using namespace std;

//input 3 integers check if they're equal
//Use logical operators to ensure all values are identical

int main() {
	int a;
	int b;
	int c;
	cout << "Enter recorded value: " << endl;cin >> a;
	cout << "Enter recorded value: " << endl;cin >> b;
	cout << "Enter recorded value: " << endl;cin >> c;

	if (a == b && b == c) {
		cout << "Values are Equal" << endl;
	}
	else {
		cout << "Not Equal" << endl;
	}
	return 0;
}