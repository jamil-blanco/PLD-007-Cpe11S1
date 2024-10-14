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
	
	if (totalAverage >= 90)
	{
		cout<<"Grade Level: A"<<endl;
	}
	
	else if (totalAverage >= 80)
	{
		cout<<"Grade Level: B"<<endl;
	}
	
	else if (totalAverage >= 70)
	{
		cout<<"Grade Level: C"<<endl;
	}
	
	else if (totalAverage >= 60)
	{
		cout<<"Grade Level: D"<<endl;
	}
	
	else if (totalAverage >= 40)
	{
		cout<<"Grade Level: E"<<endl;
	}
	
	else if (totalAverage < 40)
	{
		cout<<"Grade Level: F"<<endl;
	}
	
	else 
	{
		cout<<"Invalid Input Grade"<<endl;
	}
	
	return 0;
}
