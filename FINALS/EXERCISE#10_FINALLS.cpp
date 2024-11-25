#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string str = "Hello, World!";
	cout << "Length of string: " << str.length () << endl;
	cout << "Substring: " << str.substr(7,1) << endl;
	
	return 0;
}
