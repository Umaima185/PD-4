#include<iostream>
#include<windows.h>
using namespace std;

void xy(int, int);
void maze();
void move(int x, int y);

main()
{
	int x = 1, y = 1;
	system("cls");
	maze();
	while(true)
	{
		move(x , y);
		x = x + 1;
		if(x == 21)
		{	
			x = 4;	
		}
	}
}

void move(int x, int y)
{
	xy(x, y);
	cout << "P",
	Sleep(100);
	xy(x, y);
	cout << " ";

}

void maze()
{
	cout << "##############################" << endl;
	cout << "##                          ##" << endl;
	cout << "##                          ##" << endl;
	cout << "##                          ##" << endl;
	cout << "##                          ##" << endl;
	cout << "##                          ##" << endl;
	cout << "##                          ##" << endl;
	cout << "##                          ##" << endl;
	cout << "##                          ##" << endl;
	cout << "##############################" << endl;
}

void xy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
