#include <iostream>
using namespace std;

int main()
{
	int n[10] = {19, 3, 15, 17, 11, 9, 13, 5, 17, 1};
	int i;
	
	cout << "Element  Value   Histogram" << endl;
	for (int i = 0; i <= 9; i++) 
	{
	cout << "   " << i << "       " << n[i] << "   ";
	for (int e = 0; e < n[i]; e++) 
	{	
		cout << "*";
	}
	
		cout << endl;
	
	}
	
	return 0;
}
