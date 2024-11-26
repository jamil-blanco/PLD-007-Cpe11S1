#include <iostream>
#include <cmath>
using namespace std;

// To process
//  Calculation of addition
double add(double a, double b)
{
	return a + b;
}
// Calculation of subtraction
double subtract(double a, double b)
{
	return a - b;
}

// Calculation of multiplication
double multiply(double a, double b)
{
	return a * b;
}

// Calculation of Division
double divide(double a, double b)
{
	return a / b;
}

// INPUT - PROCESS - OUTPUT
int main ()
{
	double firstInteger;
	double secondInteger;
	char choice;
	
	cout << "Input your first integer: ";
	cin >> firstInteger;
	cout << "Input your next integer: ";
	cin >> secondInteger;
	cout << "Select an operation to apply (+, -, *, /): ";
	cin >> choice;
	
	switch (choice) // (+, -, *, /)
	{
	
	case '+':
	cout << "Result: " << add(firstInteger, secondInteger) << endl;
	break;
	
	case '-':
	cout << "Result: " << subtract(firstInteger, secondInteger) << endl;
	break;
	
	case '*':
	cout << "Result: " << multiply(firstInteger, secondInteger) << endl;
	break;
	
	case '/':
	cout << "Result: " << divide(firstInteger, secondInteger) << endl;
	break;
		
	}
	
	return 0;
}
