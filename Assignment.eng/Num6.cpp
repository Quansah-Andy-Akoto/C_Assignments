#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	if (isupper(ch))
		cout << "Uppercase letter" << endl;
	else
		cout << "Not an uppercase letter" << endl;
	return 0;
}
/*Read a character and check if it's uppercase.
The standard library function isupper()(from <cctype> .*/