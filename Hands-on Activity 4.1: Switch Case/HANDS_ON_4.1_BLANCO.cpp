#include<iostream>
using namespace std;

int main()
{
	// Input
	int physics;
	int chemistry;
	int biology;
	int mathematics;
	int computer;
	float average;
	int gradeLevel;
	int totalAverage;
	
	cout<<"Input your grade on physics:"<<endl;
	cin>>physics;
	cout<<"Input your grade on chemistry:"<<endl;
	cin>>chemistry;
	cout<<"Input your grade on biology:"<<endl;
	cin>>biology;
	cout<<"Input your grade on mathematics:"<<endl;
	cin>>mathematics;
	cout<<"Input your grade on computer:"<<endl;
	cin>>computer;
	
	// Computation of Average and grade level
	// Input
	
	average = physics + chemistry + biology + mathematics + computer;
	totalAverage = average / 5;
	
	cout<<"Average: "<<totalAverage<<endl;
	
	// Output
	
	switch (totalAverage/10)
	{
		
		case 10:
		case 9:
				cout<<"Grade Level: A"<<endl;
		break;
		
		case 8:
				cout<<"Grade Level: B"<<endl;
		break;
		
		case 7:
				cout<<"Grade Level: C"<<endl;
		break;
		
		case 6:
				cout<<"Grade Level: D"<<endl;
		break;
		
		case 5:	
		case 4:
				cout<<"Grade Level: E"<<endl;
		break;
		
		default:
				cout<<"invalid"<<endl;
		break;
	}
	
	return 0;
}
