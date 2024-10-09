#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	// Input
	int choice;
	float radius, length, width, base, height, side;
	
	// Computation
	do
	{
	cout<<"Simple Computation of Area"<<endl;
	cout<<"(1) Area of circle"<<endl;
	cout<<"(2) Area of rectangle"<<endl;
	cout<<"(3) Area of triangle"<<endl;
	cout<<"(4) Area of square"<<endl;
	cout<<"(5) Exit/End the program"<<endl;
	cin>>choice;
	
	switch (choice)
	{
		case 1:
			cout<<"Enter radius(r):"<<endl;
			cin>>radius;
			cout<<"The area of circle= "<<M_PI*radius*radius<<endl;
			
			break;
			
		case 2:
			cout<<"Enter length(L):"<<endl;
			cin>>length;
			cout<<"Enter width(W):"<<endl;
			cin>>width;
			cout<<"The area of rectangle= "<<length*width<<endl;
			
			break;
		
		case 3:
			cout<<"Enter Base(B):"<<endl;
			cin>>base;
			cout<<"Enter Height(H):"<<endl;
			cin>>height;
			cout<<"The area of triangle= "<<0.5*base*height<<endl;
			
			break;
		
		case 4:
			cout<<"Enter Side(S):"<<endl;
			cin>>side;
			cout<<"The area of square= "<<side*side<<endl;
			
			break;
			
		case 5:
			cout<<"Ending the program"<<endl;
			
			break;
			
		default:
		
				cout<<"invalid"endl;
				
				break;
			}
	}
	while (choice != 5);
	return 0;
}
