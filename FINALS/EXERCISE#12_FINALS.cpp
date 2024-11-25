#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ()
{
	string str = "123";
	int num = atoi (str.c_str()); //Convert string into integer
	cout << "Converted number: " << num << endl;
	
	return 0;
}


