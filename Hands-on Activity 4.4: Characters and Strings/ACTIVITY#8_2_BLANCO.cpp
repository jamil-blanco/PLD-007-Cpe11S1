#include <iostream>
using namespace std;
int main()
{
	char ch;
	
	cout << "Input a character: ";
	cin >> ch;
	cout << "HANDLING LIBRARY SUMMARY:" << endl;
	
	// Determining whether lowercase or not
	if (islower(ch))
	{
		cout << ch << " is a lowercase"<< endl; 
	}
	else
	{
		cout << ch << " is not a lowecase" << endl;
	}
	
	// Determining whether uppercase or not
	if (isupper(ch))
	{
		cout << ch << " is a uppercase"<< endl; 
	}
	else
	{
		cout << ch << " is not a uppercase" << endl;
	}
	
	// Converting lowercase into uppercase
	if (islower(ch))
	{
		char upper = toupper(ch);
		cout << ch << " converted to uppercase "<< upper << endl; 
	}
	else
	{
		cout << ch << " is already uppercase" << endl;
	}
	
	// Converting uppercase into lowercase
	if (isupper(ch))
	{
		char lower = tolower (ch);
		cout << ch << " converted to lowercase "<< lower << endl; 
	}
	else
	{
		cout << ch << " is already lowercase" << endl;
	}
	
	// Determining whether blank character or not
	if (isblank(ch))
	{
		cout << ch << " is a blank character"<< endl; 
	}
	else
	{
		cout << ch << " is not a blank character" << endl;
	}
	
	// Determining whether digit or not
	if (isdigit(ch))
	{
		cout << ch << " is a digit"<< endl; 
	}
	else
	{
		cout << ch << " is not a digit" << endl;
	}

	
	return 0;
}
