#include <iostream>
using namespace std;
//The Ternary or Conditional Operator
// It is a shorthand for if-else statment.
int main() {
	int w, e;
	cout << "Input integers: " << endl;cin >> w >> e;
	if (w > e) {
		cout << "The first value is larger" << endl;
	}
	else{
		cout << "The second value is larger" << endl;
	}
	return 0;
}