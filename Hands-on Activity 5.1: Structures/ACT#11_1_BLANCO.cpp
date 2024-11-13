#include <iostream>
using namespace std;

int multiple (int myInt, int x)
{
	for (int i; i <= 1; i++)
	{
		if ( myInt % x == 0)
		{
			return 1;
		}
	}
	return 0;
}
