#include<iostream>
using namespace std;
//DIFFERENCE BETWEEN BITWISE NOT AND LOGICAL NOT
int main() {
	/*Bitwise NOT (~):inverts each bit of an integer.*/
	//EXAMPLE:
	int x = 8;
	cout << "~x=" << ~x << endl;
	/*Logical NOT (!):Converts a boolean value to its opposite that is;true becomes false, and vice versa.*/
	//EXAMPLE:
	bool Coy = true;
	cout << !Coy << endl;
	//True in logic fuction is represented with 1 and false 0.
	return 0;
}