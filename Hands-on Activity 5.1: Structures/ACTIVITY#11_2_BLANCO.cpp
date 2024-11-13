#include <iostream>
#include <bitset>
using namespace std;

// Input
unsigned int reverseBits (unsigned int n)
{
	unsigned int result = 0;
	for (int i = 0; i < 32; i++)
	{
		result |= ((n >> i) & 1) << (31 - i);
		
	}
	return result;
}

// Process
int main ()
{
	unsigned int Int;
	
	cout << "Enter an integer (must unasigned): ";
	cin >> Int;
	unsigned int reversedNum = reverseBits(Int);
	
	// Output
	cout << "Reversed number: " << bitset <32> (reversedNum) << endl;
	
	cout << "Original number: " << bitset <32> (Int) << endl;
	
	return 0;
}
