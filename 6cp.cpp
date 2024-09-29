#include<iostream>
using namespace std;

void duration(int,int);

main()
{
int h,m;
while(true)
{
cout<<"Enter hours:";
cin>> h;
cout<<"Enter minutes:";
cin>> m;

duration(h,m);
}
}

void duration(int h,int m)
{
if(m/60 > h)
{
cout<<m;
} 

if(m/60 < h)
{
cout<<h;
}
}