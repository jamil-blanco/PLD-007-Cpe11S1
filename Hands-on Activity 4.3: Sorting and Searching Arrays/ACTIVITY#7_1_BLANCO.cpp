#include<iostream>
using namespace std;

int main()
{
	int dayChoice;
	int size=7;
	string dayWeek[size] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	while (1)
	{
		cout << "Pick a number: ";
		cin >> dayChoice;
		
		if (dayChoice < 7)
		{
			cout << "Output: " << dayWeek[dayChoice] << endl;
		}
		
		else 
		{
			cout << "Error, No such day" << endl;
			break;
		}
	}
	
	return 0;
}
