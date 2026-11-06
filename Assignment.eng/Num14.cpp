#include<iostream>
using namespace std;

//LEFT SHIFT OPERATOR(<<)
/*Shifts the bit of a number to the left by specific number of positons. Each shift multiples the number by 2 */
//EXAMPLE:
int main() {
	int m = 10;
	int output = m << 1;
	cout << "Left shift of 10 by position 1: " << output << endl;
	cout << "\n";
	
	//RIGHT SHIFT OPERATOR(>>)
	/*Each shift to the right divides the number by 2(for positive integers*/
	//EXAMPLE:
	int n = 8;
	int result = n >> 1;
	cout << "Right shift of 8 position by 2: " << result << endl;

	return 0;
}