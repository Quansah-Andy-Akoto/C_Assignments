#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//Calculating the Area of a Circle
	double radius;
	const double pi = 3.141592653589793;

	cout << "Enter radius: ";
	cin >> radius;

	double area = pi * pow(radius, 2);
	cout << "Area: " << area << endl;
		return 0; 
}
/*You need to compute pi*r^2.
Note that C++ doesn't have an exponential operator like other languages.
Instead, you can use the pow() function from the <cmath>*/