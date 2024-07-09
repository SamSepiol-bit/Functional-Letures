// Function struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct {
	string brand;
	string model;
	int year;
}

myCar1, myCar2, myCar3, myCar4; // We can add variables by seprating
int main() {
	
	//put data into the first structure
	myCar1.brand = "BMW";
	myCar1.model = "M5";
	myCar1.year = 1999;
	//put data into secound structure
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 1969;

	myCar3.brand = "Nissan";
	myCar3.model = "GTR";
	myCar3.year = 1983;

	myCar4.brand = "Toyota";
	myCar4.model = "AE86";
	myCar4.year = 1977;



	//print the structur members 
	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
	cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << "\n";
	cout << myCar4.brand << " " << myCar4.model << " " << myCar4.year << "\n";
	return 0;
}
