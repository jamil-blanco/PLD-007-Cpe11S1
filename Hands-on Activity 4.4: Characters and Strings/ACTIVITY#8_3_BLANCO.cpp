#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num1, num2, num3, num4, sum;
	char string1[50], string2[50], string3[50], string4[50];
	
	printf("Input First Number: ");
	scanf("%s", string1); 
	printf("Input Second Number: ");
	scanf("%s", string2);
	printf("Input Third Number: ");
	scanf("%s", string3);
	printf("Input Last Number: ");
	scanf("%s", string4);
	
	num1 = atoi(string1);
	num2 = atoi(string2);
	num3 = atoi(string3);
	num4 = atoi(string4);
	
	sum = num1 + num2 + num3 + num4;
	
	printf("The total of four values is: %d\n", sum);
	
	return 0;
	
	
}
