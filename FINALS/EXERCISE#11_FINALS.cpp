#include <iostream>
#include <cstdlib>
using namespace std;

 int main ()
 {	//Memory management space
	int*ptr = (int*) malloc(sizeof(int)); //Dynamically allocate memory
	if (ptr!=NULL)
	{
 		*ptr = 10;
 		cout << "Value: " << *ptr << endl;
 		free(ptr); //Free allocated memory
	}
	
 	return 0;
 }
