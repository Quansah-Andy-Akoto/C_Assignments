#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	
	cout << "Input a string: " << endl;getline(cin,input);
	if (input.find("a") != string::npos) {
		cout << "Contains the word: a" << endl;
	}
	else {
		cout << "Does not contain any" << endl;
	}
	return 0;
}