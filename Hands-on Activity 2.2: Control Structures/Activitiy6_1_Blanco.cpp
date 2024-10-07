#include<stdio.h>
int main()

{ 
	// Using conditional statements (if-else statements), write a program  that asks a user for a number and prints out if it is an even or an odd number. 
	
	//Input
	int num1;
	printf("Enter an Integer:\n");
	scanf("%d",&num1);
	
	//Process
	
	if(num1 % 2)
		printf("Odd\n");
	else
		printf("Even\n");
		
		
	return 0;
	
	
}
