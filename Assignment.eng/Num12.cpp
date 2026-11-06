#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int q;
	
	cout << "Input a value: " << endl;cin >> q;
	cout <<"= "<< (q / 3) << endl;
	cout <<" " << endl;

	if ((q % 2 != 0) && (q / 3)) {
		cout << "It divisible and odd " << endl;
	}
	else{
		cout << "It's not divisible and even " << endl;
	}
	return 0;
}