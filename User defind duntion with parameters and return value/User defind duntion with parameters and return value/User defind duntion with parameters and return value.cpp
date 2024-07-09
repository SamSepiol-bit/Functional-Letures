// User defind duntion with parameters and return value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Function prototype 
int add(int a, int b);

int main() {
	int result = add(3, 4); //Function call with arguments
	cout << "Result " << result << endl;

	return 0;
}
//Function that return the sum of two numbers
int add(int a, int b) {
	return a + b;
}

