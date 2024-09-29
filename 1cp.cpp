#include<iostream>
using namespace std;

void state(int, int);

main()
{
int x,y;
cout<<"Enter the value for x: ";
cin>>x;
cout<<"Enter the value for y: ";
cin>>y;

state(x,y);
}

void state(int x, int y)
{
	if(x==y)
	{
		cout<<"true";
	}
	if(x!=y)
	{
		cout<<"false";
	}

}
