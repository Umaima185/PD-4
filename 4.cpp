#include<iostream>
#include<windows.h>
using namespace std;

void xy(int, int);
void maze();
void move(int x, int y);

main()
{
 int x = 4,y = 4;
 system("cls");
 maze();
while(true)
{
	move(x,y);
	  while(y<=7)
		{
		  y++;
		  move(x,y);
			}
	while(y<=8 && y!=1)
	{
	  y--;		
	  move(x,y);
	x = 4;
		}
	}
}

void move(int x, int y)
{
	xy(x, y);
	cout << "P",
	Sleep(50);
	xy(x,y);
	cout<<" ";
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
