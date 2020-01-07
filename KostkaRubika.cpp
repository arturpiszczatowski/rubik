#include <iostream>
using namespace std;

void kost(char tablica[6][9]);

int main()
{
	char kostka[6][9]{
		{'R','R','R','R','R','R','R','R','R'},
		{'B','B','B','B','B','B','B','B','B'},
		{'Y','Y','Y','Y','Y','Y','Y','Y','Y'},
		{'G','G','G','G','G','G','G','G','G'},
		{'W','W','W','W','W','W','W','W','W'},
		{'O','O','O','O','O','O','O','O','O'}
	};

	kost(kostka);
}


void kost(char tablica[6][9])
{
	cout << "         ";
	for (int i=0;i<=2;i++)
	{
		cout << "|" << tablica[0][i] << "|";
	}
	cout << endl;
	cout << "         ";
	for (int i=3;i<=5;i++)
	{
		cout << "|" << tablica[0][i] << "|";
	}
	cout << endl;
	cout << "         ";
	for (int i=6;i<=8;i++)
	{
		cout << "|" << tablica[0][i] << "|";
	}
	cout << endl;

	cout << "____________________________________" << endl;
	
	for (int i = 0; i <= 2; i++)
	{
		cout << "|" << tablica[1][i] << "|";
	}
	for (int i = 0; i <= 2; i++)
	{
		cout << "|" << tablica[2][i] << "|";
	}
	for (int i = 0; i <= 2; i++)
	{
		cout << "|" << tablica[3][i] << "|";
	}
	for (int i = 0; i <= 2; i++)
	{
		cout << "|" << tablica[4][i] << "|";
	}
	
	cout << endl;
	
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[1][i] << "|";
	}
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[2][i] << "|";
	}
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[3][i] << "|";
	}
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[4][i] << "|";
	}
	
	cout << endl;
	
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[1][i] << "|";
	}
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[2][i] << "|";
	}
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[3][i] << "|";
	}
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[4][i] << "|";
	}
	
	cout << endl;
	cout << "____________________________________" << endl;
	cout << "         ";
	for (int i = 0; i <= 2; i++)
	{
		cout << "|" << tablica[5][i] << "|";
	}
	cout << endl;
	cout << "         ";
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[5][i] << "|";
	}
	cout << endl;
	cout << "         ";
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[5][i] << "|";
	}
	cout << endl;
	
}