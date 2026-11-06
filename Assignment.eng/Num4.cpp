//String Comparison
#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cout << "Enter a string: ";
	cin >> input;
	cout << (input == "hello" ? "Hello!" : "Goodbye!") << endl;
	return 0;
}
/*Read a string from the user and check if it equals "hello".With std::string, you can directly use the == operator*/