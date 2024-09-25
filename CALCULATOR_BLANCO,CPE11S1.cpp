#include<iostream>
using namespace std;
int main()

{
	// create c++ program that applies MDAS calculator'
	//Input
	char c;
	int x = 0;
	int y = 0;
	int sum = 0, diff = 0, prod = 0, div = 0;
	
	 
	cout<<"Enter a first number/integer =";
	cin>>x;
	cout<<"Enter an operation (+, -, *, /) =";
	cin>>c;
	cout<<"Enter a second number/integer =";
	cin>>y;
	
	// Process
	// Computation
	sum = x + y;
	diff = x - y;
	prod = x * y;
	div = x / y;
	

	switch (c)
	{
		
		case '+':
			cout<<"Answer= "<<sum;
		break;
		
		case '-':
			cout<<"Answer= "<<diff;
		break;
		
		case '*':
			cout<<"Answer= "<<prod;
		break;
		
		case '/' :
			cout<<"Answer= "<<div;
		break;
			
		default:
			{
				cout<<"invalid";
				break;
			}
	}
	
	return 0;
}

