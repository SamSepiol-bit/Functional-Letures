

#include <iostream>
using namespace std;

//void function with parameters
void greetUser(const string& name);

int main() {
	string username;
	cout << "Enter Your Name: ";
	cin >> username;

	greetUser(username); //function call with argument

	return 0;
}

//function definition
void greetUser(const std::string& name) {
	cout << "Hello, " << name << "! " << endl;
}

