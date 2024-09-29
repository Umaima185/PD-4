#include<iostream>
#include<windows.h>
using namespace std;

void xy(int,int);
void h(int,int);
void a1(int,int);
void s1(int,int);
void s2(int,int);
void a2(int,int);
void n(int,int);
main()
{
	
	int x = 0, y = 0;
	system("cls");
	h(x, y); 
	a1(x, y);
	s1(x, y);
	s2(x, y);
	a2(x, y);
	n(x, y);

}

void h(int x,int y)
{
xy(x,y);
cout<<"##      ##"<<endl;
xy(x,y + 1);
cout<<"##      ##"<<endl;
xy(x,y + 2);
cout<<"##########"<<endl;
xy(x,y + 3);
cout<<"##      ##"<<endl;
xy(x,y + 4);
cout<<"##      ##"<<endl;
}

void a1(int x,int y)
{
xy(x + 13,y + 4);
cout<<"  ##  "<<endl;
xy(x + 13,y + 5);
cout<<" ##  ## "<<endl;
xy(x + 13,y + 6);
cout<<" ###### "<<endl;
xy(x + 13,y + 7);
cout<<" ##  ## "<<endl;
xy(x + 13,y + 8);
cout<<" ##  ## "<<endl;
}


void s1(int x,int y)
{
xy(x + 26,y + 8);
cout<<"    ####   "<<endl;
xy(x +26,y + 9);
cout<<"  ##    #  "<<endl;
xy(x + 26,y + 10);
cout<<"  ####    "<<endl;
xy(x +26,y + 11);
cout<<"       ##  "<<endl;
xy(x + 26,y + 12);
cout<<"   ####   "<<endl;

}

void s2(int x,int y)
{
xy(x + 39,y + 12);
cout<<"    ####   "<<endl;
xy(x + 39,y + 13);
cout<<"  ##    #  "<<endl;
xy(x + 39,y + 14);
cout<<"  ####    "<<endl;
xy(x + 39,y + 15);
cout<<"       ##  "<<endl;
xy(x + 39,y + 16);
cout<<"   ####   "<<endl;

}

void a2(int x,int y)
{
xy(x + 52,y + 16);
cout<<"  ##  "<<endl;
xy(x + 52,y + 17);
cout<<" ##  ## "<<endl;
xy(x + 52,y + 18);
cout<<" ###### "<<endl;
xy(x + 52,y + 19);
cout<<" ##  ## "<<endl;
xy(x + 52,y + 20);
cout<<" ##  ## "<<endl;
}

void n(int x,int y)
{
xy(x + 65,y + 20);
cout<<"##        ##"<<endl;
xy(x + 65,y + 21);
cout<<"##  #     ##"<<endl;
xy(x + 65,y + 22);
cout<<"##    #   ##"<<endl;
xy(x + 65,y + 23);
cout<<"##     #  ##"<<endl;
xy(x + 65,y + 24);
cout<<"##       ###"<<endl;

}

void xy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
