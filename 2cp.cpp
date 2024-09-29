#include<iostream>
using namespace std;

void reverse(string);

main()
{
string st;
cout<<"Enter 'true' or 'false': ";
cin>>st;

reverse(st);

}

void reverse(string st)
{
if(st=="true")
{
cout<<"false";
}
else if(st=="false")
{
cout<<"true";
}
else
{
cout<<"invalid input";
}

}