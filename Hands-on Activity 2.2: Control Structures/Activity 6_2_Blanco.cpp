#include<iostream>
using namespace std;

int main()

{
	// Determine whether students/regular/senior citizen
	// Input
	int minimumFare = 9;
	int age;
	
	cout << " Your Age: " << endl;
	cin >> age;
	
	// Process
	
	if (( age >= 60) && ( age <= 120))
	{
		cout << " Age group: Senior Citizen" << endl;
		cout << " Fare = 7 (discount 10%)" << endl;
	}
	
	else if (( age >= 4) && ( age <= 24)) 
	{
		cout << " Age group: Student" << endl;
		cout << " Fare = 8 (discount 8%) " << endl;
	}
	
	else 
	{
		cout << " Fare = 9 (No discount/minimum fare) " << endl;
	}
	
	return 0;
}
