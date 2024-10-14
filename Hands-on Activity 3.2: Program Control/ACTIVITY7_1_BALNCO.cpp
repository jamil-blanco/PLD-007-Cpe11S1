#include<iostream>
using namespace std;

int main()
{
	// Input
	int sum = 0;
	int number;
	
	// Process
	for (number = 2; number <= 100; number += 2)
	{
		sum += number;
	}
	
	// Output
	printf("Sum: %d\n", sum);
	
	return 0;
}
