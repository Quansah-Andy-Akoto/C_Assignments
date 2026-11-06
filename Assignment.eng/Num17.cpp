#include<iostream>
using namespace std;

//Using Bitwise AND to check if a number is of the power 2.
/*A common approach is to test if a number is greater than 0 and if (number & (number - 1)) equals 0.
This works because powers of 2 have only one bit set to 1:*/

int main() {
	int num;
	cout << "Input a value:\n";cin >> num;
	if ((num > 0 & (num - 1)) == 0) {
		cout << "Power of 2\n";
	}
	else{
		cout << "Not a power of 2\n";
	}
	return 0;
}