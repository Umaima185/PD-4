#include<iostream>
using namespace std;

void day(int,int);

main()
{
int p,tp;
while(true){

cout<<"Enter people: ";
cin>>p;
cout<<"Enter tissue rolls: ";
cin>>tp;

day(p,tp);
}

}

void day(int p,int tp)
{
int days;
days = (500*tp)/(p*57);
if(days>10)
{
cout<<"Your TP will last "<<days<<", no need to panic";
}
else if(days < 10 && days > 0)
{
cout<<"Your TP will last "<<days<<", buy MORE!!";
}

}