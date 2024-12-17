#include <iostream>
#include <cmath>
using namespace std;

// Formula for converting Fahrenheit to Celsius 
double toCelsius (double f) 
{
	return (f - 32) * 5/9;	
}

// Formula for converting Celsius to Fahrenheit
double toFahrenheit (double c)
{
	return c * 9 /5 +32;
}


int main()
{
	double yourTemperature;
	char yourChoice;
	
	cout << "Conversion of Fahrenheit to Celsius and Vice versa" << endl;
	cout << "Choose (F) to convert Fahrenheit to Celsius" << endl;
	cout << "Choose (C) to convert Celsius to Fahrenheit" << endl;
	cin >> yourChoice;
	cout << "Enter temperature: ";
	cin >> yourTemperature;
	cout << "Converted: " << (yourChoice == 'F' ? toCelsius(yourTemperature) : toFahrenheit(yourTemperature)) << endl;
	
	return 0;
}
