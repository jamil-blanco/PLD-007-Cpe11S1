#include<iostream>
using namespace std;

int main()

{
	// Initialization of variables
	
	float grade;
	
	// Input the values of the given grades:
	
	cout << " Input your percentage grade: " << endl;
	cout << " Input your grade = ";
	cin >> grade;
	
	// Process
	
	if (( grade >= 94 ) && ( grade <= 100 ))
	
	{ 
		cout << " Equivalent Grade = 1.00 " << endl;
		cout << " Descriptive Rating = Execellent" << endl;
	}
	
	else if (( grade >= 88.5 ) && ( grade <= 93.99 ))
	{
		cout << " Equivalent Grade = 1.25 " << endl;
		cout << " Descriptive Rating = Superior" << endl;
	}
	
	else if (( grade >= 83 ) && ( grade <= 88.49 ))
	{
		cout << " Equivalent Grade = 1.50 " << endl;
		cout << " Descriptive Rating = Meritorious" << endl;
	}
	
	else if (( grade >= 77.5 ) && ( grade <= 82.99 ))
	{
		cout << " Equivalent Grade = 1.75 " << endl;
		cout << " Descriptive Rating = Very Good" << endl;
	}

	else if (( grade >= 72 ) && ( grade <= 77.49 ))
	{
		cout << " Equivalent Grade = 2.00 " << endl;
		cout << " Descriptive Rating = Good" << endl;
	}
	
	else if (( grade >= 65.5 ) && ( grade <= 71.99 ))
	{
		cout << " Equivalent Grade = 2.25 " << endl;
		cout << " Descriptive Rating = Very Satisfactory" << endl;
	}
		
	else if (( grade >= 61 ) && ( grade <= 65.49 ))
	{
		cout << " Equivalent Grade = 2.50 " << endl;
		cout << " Descriptive Rating = Satisfactory " << endl;
	}
	
	
	else if (( grade >= 55.5 ) && ( grade <= 60.99 ))
	{
		cout << " Equivalent Grade = 2.75 " << endl;
		cout << " Descriptive Rating = Fair" << endl;
	}
	
	else if (( grade >= 50 ) && ( grade <= 55.49 ))
	{
		cout << " Equivalent Grade = 3.00 " << endl;
		cout << " Descriptive Rating = Passing " << endl;
	}
	
	else
	{
		cout << " Equivalent Grade = 5.00 " << endl;
		cout << " Descriptive Rating = Failed" << endl;
	}
	
	return 0;
	
	
}
