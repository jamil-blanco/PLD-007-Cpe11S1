#include <iostream>
using namespace std;

int main ()

{
	
	// Input
	
	int x = 4;
	int y = 2;
	int sum = 0, difference = 0, product = 0, remainder = 0;
	float quotient; 
	
	// Process	
	
	// Computation of Sum
	sum = x + y;
	
	// Computation of Difference
	difference = x - y;
	
	// Computation of Product
	product =  x * y;
	
	// Computation of Quotient
	quotient = x / y;
	
	// Computation of Remainder
	remainder = x % y;
	
	// Output
	cout << " Sum = " << sum << endl;
	cout << " Difference = " << difference << endl;
	cout << " Product = " << product << endl;
	cout << " Quotient = " << quotient << endl;
	cout << " Remainder = " << remainder << endl;
	
	return 0;
	

	
}
