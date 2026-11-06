#include <iostream>
#include<cmath>



int main() {
	int n;
	std::cout << "Enter value: " <<std:: endl;std::cin >> n;
	if (n % 2 != 0) {
		std::cout << "Odd number" << std::endl;
	}
	else {
	std::cout << "Even number" << std::endl;
		}
	return 0;
}
	//Use the modulus operator (%) to determine if an integer is odd