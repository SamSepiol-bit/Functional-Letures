// getline function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	//input function
	string name;
	cout << "Enter your name: " ;
	getline(cin, name);

	//output funtion
	cout << "Hello, " << name << "!" << endl;

	return 0;

}

