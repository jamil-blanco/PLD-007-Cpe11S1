#include<iostream>
using namespace std;
int main()

{
	// create c++ program to determie if alphabet is vowel or consonant
	char c;
	
	cout<<"Enter a Gender:";
	cin>>c;
	
	switch (c)
	{
		
		case 'F':
			cout<<"Female";
		break;
		
		case 'f':
			cout<<"Female";
		break;
		
		case 'M':
			cout<<"Male";
		break;
		
		case 'm' :
			cout<<"Male";
	}
	
	return 0;
}

