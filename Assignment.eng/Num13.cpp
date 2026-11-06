#include <iostream>
using namespace std;

int main() {
	int f, j;

	//Input values
	cout << "Enter two integers:\n";
	cout << "f= ";
	cin >> f;
	cout << "j= ";
	cin >> j;

	//Display before swapping
	cout << "\nBefore swappiing:\n";
	cout << "f= " << f << "; " << "j= " << j << endl;
	
	//Swapping using XOR
	f = f ^ j;
	j = f ^ j;
	f = f ^ j;

	//Display after swapping
	cout << "\nAfter swapping using XOR\n";
	cout << "f=" << f <<"; " << "j= " << j << endl;
	return 0;
}