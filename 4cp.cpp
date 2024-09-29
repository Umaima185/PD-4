#include<iostream>
using namespace std;

void checkSpeed(int);

main()
{
int speed;
while(true){
cout<<"Speed detected:";
cin>> speed;

checkSpeed(speed);
}

}

void checkSpeed(int speed)
{
if(speed >100 && speed<=300)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
} 

else if(speed <=100)
{
cout<<"Perfect! You're going good.";
}
}