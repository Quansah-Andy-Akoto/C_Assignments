#include<iostream>
#include<string>	
#include<cmath>
using namespace std;

//Function to convert binary to decimal
//It reads the binary number as a string to preserve leading zeros and avoid input issues.
int binaryToDecimal(const string&binary) {
	int decimal = 0;
	int length = binary.length();

	//It uses pow(2,position) to calculate the value of each bit.
	for (int i = 0; i < length;++i) {
		if (binary[i] == '1') {
			decimal += pow(2, length - 1 - i);

		}//Includes input validation to ensure only 0 and 1 are processed.
		else if(binary[i] != '0'){
			cerr << "Invalid binary digit: " << binary[i] << endl;
			return -1;
		}
	}
	return decimal;
}
int main() {
	string binary;
	cout << "Enter a binary number: ";
	cin >> binary;

	int decimal = binaryToDecimal(binary);
	if (decimal != -1) {
		cout << "Decimal equivalent: " << decimal;
	}
	return 0;
}