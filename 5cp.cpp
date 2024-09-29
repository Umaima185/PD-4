#include<iostream>
using namespace std;

void checkpoint(int,int);

main()
{
int a,b;
while(true)
{
cout<<"Your position:";
cin>> a;
cout<<"Friend's position:";
cin>> b;

checkpoint(a,b);
}
}

void checkpoint(int a,int b)
{
if(a + 6 >= b)
{
cout<<"true";
} 

if(!(a + 6 >= b))
{
cout<<"false";
}
}