#include<iostream>
#include<windows.h>
using namespace std;

void xy(int,int);
void name(int,int);
main()
{
	
	int x, y;
	cout<<"Enter x-coordinate:";
	cin>> x;
	cout<<"Enter y-coordinate:";
	cin>> y;
	system("cls");
	name(x, y); 

}

void name(int x,int y)
{
xy(x,y);
 cout << "##    ##   ###     ###     ##      ########    ###     ###     ##"   <<endl;
xy(x,y + 1);
 cout << "##    ##   ## #   # ##   ##  ##       ##       ## #   # ##   ##  ##" <<endl;
xy(x,y + 2);
 cout << "##    ##   ##  # #  ##   ##  ##       ##       ##  # #  ##   ##  ##" <<endl;
xy(x,y + 3);
 cout << "##    ##   ##   #   ##   #######      ##       ##   #   ##   #######"<<endl;
xy(x,y + 4);
 cout << "  ####     ##       ##   ##   ##   #########   ##       ##   ##   ##"<<endl;
}

void xy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
