#include<iostream>
using namespace std;
int main()

{
	// Input
	int choice;
	float value;
	float result;
	
	// Computation
	do
	{
	cout<<"Simple Conversion"<<endl;
	cout<<"(1) centimeter(cm) to inches"<<endl;
	cout<<"(2) inches to centimeter(cm)"<<endl;
	cout<<"(3) feet to meter"<<endl;
	cout<<"(4) meter to feet"<<endl;
	cout<<"(5) Exit/End the program"<<endl;
	cin>>choice;
	
	switch (choice)
	{
		case 1:
			cout<<"Enter value of centimeter (cm):"<<endl;
			cin>>value;
			result = value / 2.54;
			cout<<"The value into inches: "<<result<<endl;
			
			break;
			
		case 2:
			cout<<"Enter value of inches:"<<endl;
			cin>>value;
			result = value * 2.54;
			cout<<"The value into centimeters(cm): "<<result<<endl;
			
			break;
		
		case 3:
			cout<<"Enter value of feet:"<<endl;
			cin>>value;
			result = value / 3.2808399;
			cout<<"The value into meter:  "<<result<<endl;
			
			break;
		
		case 4:
			cout<<"Enter value of meter: "<<endl;
			cin>>value;
			result = value * 3.2808399;
			cout<<"The value into feet: "<<result<<endl;
			
			break;
			
		case 5:
			cout<<"Ending the program"<<endl;
			
			break;
			
		default:
		
				cout<<"invalid"<<endl;
				
				break;
			}
	}
	while (choice != 5);
	return 0;
}
