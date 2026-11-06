//Comparison using Greater Than
#include <iostream>
using namespace std;

//Take two integers determine which is greater
int main() {
	double r,m;
	
	cout << "Enter values: " << endl;
	cin >> r >> m;

	if (r > m) {
		cout << "Greater Than: " << endl;
		cout << r<<" > "<< m;
	}
	else {
		cout << "Not Greater Than: " << endl;
		cout << r << " !> " << m;
	}
	return 0;
}