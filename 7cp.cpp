#include<iostream>
using namespace std;

void flowerShop(int,int,int);

main()
{
int redRose, whiteRose, tulips;
while(true){
cout<<"Red Rose: ";
cin>>redRose;
cout<<"White Rose: ";
cin>>whiteRose;
cout<<"Tulips:";
cin>>tulips;

flowerShop(redRose, whiteRose, tulips);

}
}

void flowerShop(int redRose,int whiteRose,int tulips)
{
float pr;
pr = (redRose*2) + (whiteRose*4.10) + (tulips*2.50);
cout<<"Original price: "<<pr<<endl;
if(pr>200)
{
pr = pr - (20*pr/100);
cout<<"Price after discount: "<<pr;
}
else
{
cout<<"No discount applied.";
}
}