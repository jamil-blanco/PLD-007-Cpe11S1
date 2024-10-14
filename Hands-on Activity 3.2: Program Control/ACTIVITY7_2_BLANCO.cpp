#include<stdio.h>
#include<math.h>

int main ()
{
	// Input
	
	double investment = 1000;
	double interest = 0.05;
	int years = 10;
	
	printf("Year\tAmount in Account\n");
	
	// Process
	
	for(int n = 1; n <= years; n++)
	
	// Output
	{
		double amount = investment * pow(1 + interest, n);
		printf("%d\t%.2f\n",n ,amount);
	}
	return 0;
}

