#include<iostream>
using namespace std;
int main ()
{
	int i;
	int j;
	char chessBoard [8][8] = 
	{
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
	};
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			cout << chessBoard [i][j] << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}



