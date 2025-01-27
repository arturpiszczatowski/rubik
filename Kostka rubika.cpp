#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void kostkacout(char[6][9]);
void obrotwiersza(char[6][9],int Y);
void obrotkolumny(char[6][9],int Y);
bool warunekskonczenia(char[6][9]);
void mieszanko(char[6][9]);

char kostka[6][9]{
		{'R','R','R','R','R','R','R','R','R'},
		{'B','B','B','B','B','B','B','B','B'},
		{'Y','Y','Y','Y','Y','Y','Y','Y','Y'},
		{'G','G','G','G','G','G','G','G','G'},
		{'W','W','W','W','W','W','W','W','W'},
        {'O','O','O','O','O','O','O','O','O'}
	};
	
char bufor[4]={0};
char bufor2[9]={0};


int main()
{
	cout << "Powodzenia" << endl << endl;
	
	mieszanko(kostka);

	kostkacout(kostka);
	
	cout << endl;
	cout << "Aby wykonac ruch kostka wybierz najpierw wiersz(1,2,3) lub kolumne(4,5,6), ktora chcesz obrocic." << endl;
	cout << "Nastepnie kierunek w ktorym chcesz obrocic dany wiersz/kolumne. Gdy wiersz to L - aby obrocic w lewo, P - aby obrocic w prawo. Gdy kolumna to G - w gore, D - w dol." << endl << endl;
	

	while(warunekskonczenia(kostka)!=1)
	{
	cout << "Wybierz wiersz(1-3) badz kolumne(4-6): ";
	int Y=0;
	cin >> Y;
	
	switch(Y){
		case 1:
		case 2:
		case 3:
			obrotwiersza(kostka,Y);
			break;
		case 4:
		case 5:
		case 6:
			obrotkolumny(kostka,Y);
			break;
	}
	cout << endl << endl;
	kostkacout(kostka);
	cout<< endl << endl;
	}
	
	cout << endl << endl;
	cout << "GRATULACJE, DOKONALES/AS NIEMOZLIWEGO!" << endl << endl;
	kostkacout(kostka);
	
}


void kostkacout(char tablica[6][9]){
	cout << "           4  5  6" << endl;
	cout << "          " ;
	for (int i=0;i<=2;i++)
	{
		cout << "|" << tablica[0][i] << "|";
	}
	cout << endl;
	cout << "          ";
	for (int i=3;i<=5;i++)
	{
		cout << "|" << tablica[0][i] << "|";
	}
	cout << endl;
	cout << "          ";
	for (int i=6;i<=8;i++)
	{
		cout << "|" << tablica[0][i] << "|";
	}
	cout << endl;

	cout << "  ___________________________________" << endl;
	cout << "1";
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
	cout << "2";
	
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[1][i] << "|";
	}
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[2][i] << "|";
	}
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[3][i] << "|";
	}
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[4][i] << "|";
	}
	
	cout << endl;
	cout << "3";
	
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[1][i] << "|";
	}
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[2][i] << "|";
	}
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[3][i] << "|";
	}
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[4][i] << "|";
	}
	
	cout << endl;
	cout << "  ___________________________________" << endl;
	cout << "          ";
	for (int i = 0; i <= 2; i++)
	{
		cout << "|" << tablica[5][i] << "|";
	}
	cout << endl;
	cout << "          ";
	for (int i = 3; i <= 5; i++)
	{
		cout << "|" << tablica[5][i] << "|";
	}
	cout << endl;
	cout << "          ";
	for (int i = 6; i <= 8; i++)
	{
		cout << "|" << tablica[5][i] << "|";
	}
	cout << endl;
	
}

void obrotwiersza(char tablica[6][9],int Y){
	cout << "Podaj kierunek obrotu (L/P): ";
	char X=0;
	cin >> X;
	switch(X){
		case 'L':
		case 'l':
				if(Y==1)
				{
					for(int j=0;j<=2;j++)
					{
						for(int i=0;i<=3;i++)
						{
							bufor[i]=tablica[i+1][j];
						}
						tablica[4][j]=bufor[0];
						tablica[3][j]=bufor[3];
						tablica[2][j]=bufor[2];
						tablica[1][j]=bufor[1];
					}
					
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[0][z];
					}
					tablica[0][0]=bufor2[6];
					tablica[0][1]=bufor2[3];
					tablica[0][2]=bufor2[0];
					tablica[0][3]=bufor2[7];
					tablica[0][5]=bufor2[1];
					tablica[0][6]=bufor2[8];
					tablica[0][7]=bufor2[5];
					tablica[0][8]=bufor2[2];
				}
				else if(Y==2)
				{
					for(int j=3;j<=5;j++)
					{
						for(int i=0;i<=3;i++)
						{
							bufor[i]=tablica[i+1][j];
						}
						tablica[4][j]=bufor[0];
						tablica[3][j]=bufor[3];
						tablica[2][j]=bufor[2];
						tablica[1][j]=bufor[1];
					}
				}
				else if(Y==3)
				{
					for(int j=6;j<=8;j++)
					{
						for(int i=0;i<=3;i++)
						{
							bufor[i]=tablica[i+1][j];
						}
						tablica[4][j]=bufor[0];
						tablica[3][j]=bufor[3];
						tablica[2][j]=bufor[2];
						tablica[1][j]=bufor[1];
					}
					
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[5][z];
					}
					tablica[5][0]=bufor2[2];
					tablica[5][1]=bufor2[5];
					tablica[5][2]=bufor2[8];
					tablica[5][3]=bufor2[1];
					tablica[5][5]=bufor2[7];
					tablica[5][6]=bufor2[0];
					tablica[5][7]=bufor2[3];
					tablica[5][8]=bufor2[6];
				}
				break;
		case 'P':
		case 'p':
				if(Y==1)
				{
					for(int j=0;j<=2;j++)
					{
						for(int i=0;i<=3;i++)
						{
							bufor[i]=tablica[i+1][j];
						}
						tablica[2][j]=bufor[0];
						tablica[3][j]=bufor[1];
						tablica[4][j]=bufor[2];
						tablica[1][j]=bufor[3];
					}
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[0][z];
					}
					tablica[0][0]=bufor2[2];
					tablica[0][1]=bufor2[5];
					tablica[0][2]=bufor2[8];
					tablica[0][3]=bufor2[1];
					tablica[0][5]=bufor2[7];
					tablica[0][6]=bufor2[0];
					tablica[0][7]=bufor2[3];
					tablica[0][8]=bufor2[6];
					
				}
				else if(Y==2)
				{
					for(int j=3;j<=5;j++)
					{
						for(int i=0;i<=3;i++)
						{
							bufor[i]=tablica[i+1][j];
						}
						tablica[2][j]=bufor[0];
						tablica[3][j]=bufor[1];
						tablica[4][j]=bufor[2];
						tablica[1][j]=bufor[3];
					}
				}
				else if(Y==3)
				{
					for(int j=6;j<=8;j++)
					{
						for(int i=0;i<=3;i++)
						{
							bufor[i]=tablica[i+1][j];
						}
						tablica[2][j]=bufor[0];
						tablica[3][j]=bufor[1];
						tablica[4][j]=bufor[2];
						tablica[1][j]=bufor[3];
					}
					
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[5][z];
					}
					tablica[5][0]=bufor2[6];
					tablica[5][1]=bufor2[3];
					tablica[5][2]=bufor2[0];
					tablica[5][3]=bufor2[7];
					tablica[5][5]=bufor2[1];
					tablica[5][6]=bufor2[8];
					tablica[5][7]=bufor2[5];
					tablica[5][8]=bufor2[2];
					
				}
				break;		
	}
}

void obrotkolumny(char tablica[6][9],int Y){
	cout << "Podaj kierunek obrotu (G/D): ";
	char X=0;
	cin >> X;
	switch(X){
		case 'G':
		case 'g':
				if(Y==4)
				{
					for(int j=0;j<=6;j=j+3)
					{
						bufor[0]=tablica[0][j];
						bufor[1]=tablica[4][8-j];
						bufor[2]=tablica[5][j];
						bufor[3]=tablica[2][j];
						
						tablica[0][j]=bufor[3];
						tablica[4][8-j]=bufor[0];
						tablica[5][j]=bufor[1];
						tablica[2][j]=bufor[2];
					}
					
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[1][z];
					}
					tablica[1][0]=bufor2[2];
					tablica[1][1]=bufor2[5];
					tablica[1][2]=bufor2[8];
					tablica[1][3]=bufor2[1];
					tablica[1][5]=bufor2[7];
					tablica[1][6]=bufor2[0];
					tablica[1][7]=bufor2[3];
					tablica[1][8]=bufor2[6];
				}
				
				else if(Y==5)
				{
					for(int j=1;j<=7;j=j+3)
					{
						bufor[0]=tablica[0][j];
						bufor[1]=tablica[4][8-j];
						bufor[2]=tablica[5][j];
						bufor[3]=tablica[2][j];
						
						tablica[0][j]=bufor[3];
						tablica[4][8-j]=bufor[0];
						tablica[5][j]=bufor[1];
						tablica[2][j]=bufor[2];
					}
				}
				else if(Y==6)
				{
					for(int j=2;j<=8;j=j+3)
					{
						bufor[0]=tablica[0][j];
						bufor[1]=tablica[4][8-j];
						bufor[2]=tablica[5][j];
						bufor[3]=tablica[2][j];
						
						tablica[0][j]=bufor[3];
						tablica[4][8-j]=bufor[0];
						tablica[5][j]=bufor[1];
						tablica[2][j]=bufor[2];
					}
					
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[3][z];
					}
					tablica[3][0]=bufor2[6];
					tablica[3][1]=bufor2[3];
					tablica[3][2]=bufor2[0];
					tablica[3][3]=bufor2[7];
					tablica[3][5]=bufor2[1];
					tablica[3][6]=bufor2[8];
					tablica[3][7]=bufor2[5];
					tablica[3][8]=bufor2[2];
				}
				
				break;
		case 'D':
		case 'd':
				if(Y==4)
				{
					for(int j=0;j<=6;j=j+3)
					{
					bufor[0]=tablica[5][j];
					bufor[1]=tablica[4][8-j];
					bufor[2]=tablica[0][j];
					bufor[3]=tablica[2][j];
					
					tablica[5][j]=bufor[3];
					tablica[4][8-j]=bufor[0];
					tablica[0][j]=bufor[1];
					tablica[2][j]=bufor[2];
					}
					
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[1][z];
					}
					tablica[1][0]=bufor2[6];
					tablica[1][1]=bufor2[3];
					tablica[1][2]=bufor2[0];
					tablica[1][3]=bufor2[7];
					tablica[1][5]=bufor2[1];
					tablica[1][6]=bufor2[8];
					tablica[1][7]=bufor2[5];
					tablica[1][8]=bufor2[2];
				}
					
				else if(Y==5)
				{
					for(int j=1;j<=7;j=j+3)
					{
					bufor[0]=tablica[5][j];
					bufor[1]=tablica[4][8-j];
					bufor[2]=tablica[0][j];
					bufor[3]=tablica[2][j];
					
					tablica[5][j]=bufor[3];
					tablica[4][8-j]=bufor[0];
					tablica[0][j]=bufor[1];
					tablica[2][j]=bufor[2];
					}
				}
				else if(Y==6)
				{
					for(int j=2;j<=8;j=j+3)
					{
					bufor[0]=tablica[5][j];
					bufor[1]=tablica[4][8-j];
					bufor[2]=tablica[0][j];
					bufor[3]=tablica[2][j];
					
					tablica[5][j]=bufor[3];
					tablica[4][8-j]=bufor[0];
					tablica[0][j]=bufor[1];
					tablica[2][j]=bufor[2];
					}
					
					for(int z=0;z<=8;z++)
					{
					bufor2[z]=tablica[3][z];
					}
					tablica[3][0]=bufor2[2];
					tablica[3][1]=bufor2[5];
					tablica[3][2]=bufor2[8];
					tablica[3][3]=bufor2[1];
					tablica[3][5]=bufor2[7];
					tablica[3][6]=bufor2[0];
					tablica[3][7]=bufor2[3];
					tablica[3][8]=bufor2[6];
					
				}
				break;		
	}
}

bool warunekskonczenia(char tablica[6][9]){
	char szakalaka=0;
	
	for(int i=0;i<=5;i++)
	{
		szakalaka=tablica[i][0];
		
		for(int j=0;j<=8;j++)
		{
			if(szakalaka!=tablica[i][j])
			{
				return 0;
			}
		}
	}
	return 1;	
}

void mieszanko(char tablica[6][9]){
	char tablica2[6][9]={};
	
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=8;j++)
		{
			tablica2[i][j]=tablica[i][j];
			tablica[i][j]=0;
		}
	}
	
	srand(time(NULL));
	
	for(int a=0;a<=5;a++)
	{
		for(int b=0;b<=8;b++)
		{
			niepyklo:
				
			int i, j=0;
			i=rand()%6;
			j=rand()%9;
			
			if(tablica2[i][j]!=0)
			{
				tablica[a][b]=tablica2[i][j];
				tablica2[i][j]=0;
			}
			else
			{
				goto niepyklo;
			}
		}
	}
}


