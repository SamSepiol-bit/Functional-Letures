

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double num = 2.5;

	double squareRoot = sqrt(num);
	cout << "Square root of: " << num << ": " << squareRoot << endl;

	double power = pow(num, 2);
	cout << num << " raised to the power of 2: " << power << endl;

	double sine = sin(num);
	cout << "Sine of " << num << ": " << sine << endl;

	return 0;
	
}

