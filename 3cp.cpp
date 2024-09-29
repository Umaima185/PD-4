#include<iostream>
using namespace std;

void dcnt(string,int);

main()
{
string c;
int price;

while(true)
{
cout<<endl<<"Enter the country's name: ";
cin>> c;
cout<<"Enter the ticket price: $";
cin>>price;

dcnt(c,price);
}

}

void dcnt(string c,int price)
{
int discount;


	if(c == "Pakistan" || c == "pakistan")
	{
		discount = price - (5*price/100);
		cout<<"Price after discount: $"<<discount;
	}
	else if(c == "Ireland" || c == "ireland")
	{
		discount = price - (10*price/100);
		cout<<"Price after discount: $"<<discount;
	}
  	else if(c == "India" || c == "india")
	{
		discount = price - (20*price/100);
		cout<<"Price after discount: $"<<discount;
	}
	else if(c == "Canada" || c == "canada")
	{
		discount = price - (45*price/100);
		cout<<"Price after discount: $"<<discount;
	}
	else if(c == "England" || c == "england")
	{
		discount = price - (30*price/100);
		cout<<"Price after discount: $"<<discount;
	}
	else
	{
		cout<<"No discount available";
	}
}

