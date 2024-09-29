#include<iostream>
using namespace std;

void sleeptime(int);

main()
{
int hd;
while(true){
cout<<"Enter holidays: ";
cin>>hd;
sleeptime(hd);
}

}

void sleeptime(int hd)
{
int wd,diff;
float h,m;
wd = 365 - hd;
diff = 30000 - ((wd * 63) + (hd * 127));
h=(diff/60);
m=(diff%60);
if(diff < 0)
{
cout<<"Tom will run away"<<endl<<h*(-1)<<" hours and "<< m*(-1) <<" minutes extra"; 
}
else
{
cout<<"Plenty of sleeps"<<endl<<h<<" hours and "<< m <<" minutes less of play time"; 
}

}