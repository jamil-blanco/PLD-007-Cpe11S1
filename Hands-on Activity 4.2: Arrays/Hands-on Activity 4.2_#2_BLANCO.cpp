#include <iostream>
using namespace std;

int main ()
{
	int responseSize = 40;
	int responses[responseSize] =  { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
	
	cout << "Responses  Student Response" << endl;

	for (int i = 1; i <= 10; i++)
	{
		int count = 0;
		
		for (int e = 0; e < 40; e++)
		{
			if (responses[e] == i)
			count++;
		}
		
		cout << "  " << i << "               " << count << endl;
	}

	
	return 0;	
}
