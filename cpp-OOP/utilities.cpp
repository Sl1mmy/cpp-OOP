#include <iostream>
#include "utilities.h"

using std::cout;
using std::cin;
using std::string;

void getName() {
	string username = "";

	cout << "what's your name?\n";
	cin >> username;
	cout << "your name is: " << username << "!\n";
}

void getAge() {
	int age = -1;

	cout << "what's your age?\n";
	cin >> age;
	cout << "you are: " << age << "years old!\n";
}

int factorial(int number) {
	int result = 1;

	for (int i = 1; i <= number; i++) {
		result *= i;
	}

	return result;
}


int recursiveFactorial(int number) {

	if (number <= 1) { return 1; }
	return number * recursiveFactorial(number - 1);
}