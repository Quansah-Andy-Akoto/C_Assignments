#include<iostream>
#include<string>
#include<bitset>
#include<sstream>
#include<cmath>

using namespace std;

int binaryToDecimal(const string&binary){
	int decimal = 0;
	int length = binary.length();

	for (int i = 0;i < length;i++) {
		if (binary[i] == '1') {
			decimal += pow(2, length - 1 - i);
		}
		else if (binary[i] != '0') {
			cerr << "Invalid binary digit: " << binary[i] << endl;
			return -1;
		}
	}

	return decimal;
}
//Function to convert decimal to hexadecimal string
string decimalToHex(int decimal) {
	stringstream ss;
	ss << hex << uppercase << decimal;
	return ss.str();
}
//Function to convert decimal to octal string
string decimalToOctal(int decimal) {
	stringstream ss;
	ss << oct<< decimal;
	return ss.str();
}
int main() {
	string binary;
	int choice;

	cout << "Binary Conversion Calculator\n";
	cout << "_________________\n";
	cout << "Enter a binary number: ";cin >> binary;

	cout << "\nSelect conversion:\n";
	cout << "1.Binary to Deciaml: \n";
	cout << "2.Binary to Hexadecimal: \n";
	cout << "3.Binary to Octal: \n";
	cout << "Enter your choice(1-3): \n";
	cin >> choice;

	int decimal = binaryToDecimal(binary);
	if (decimal == -1) {
		return 1;//Error in input
	}
	switch (choice) {
	case 1:
		cout << "Deciaml: " << decimal << endl;
		break;
	case 2:
		cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
		break;
	case 3:
		cout << "Octal: " << decimalToOctal(decimal) << endl;
		break;
	default:
		cout << "Invalide choice!" << endl;
	}
return 0;
}