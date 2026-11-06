#include<iostream>
#include<cmath>
using namespace std;
//INCREMENT AND DECREMENT OPERATORS

int main() {
	/*These operators are used to increase or decrease the value of a variable by one. The increment 
operator is ++ and the decrement operator is --.*/
	int a = 5;
	cout << ++a<<endl; // Increments and then returns the value (6)
	cout <<( a= ++a); // Returns the value (6) then increments (a becomes 7)

	return 0;
}