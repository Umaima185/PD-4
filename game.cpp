#include<iostream>
using namespace std;

void xy(int, int);
void title(int,int);
void console(int,int);

main()
{
int x=0,y=0;
title(x,y);
console(x,y);
}
void title(int x,int y)
{
xy(x + 30,y+ 15);
cout<<"     ###       ###       ##    ##      ####         ####    ########    ####    #####     #####    #######    ########     ###"<<endl;
xy(x + 30,y+ 16);
cout<<"   #######    ##  #      ##    ##    #      #     #      #     ##     #      #  ##    #   #     #     ##      ##         #######"<<endl;
xy(x + 30,y+ 17);
cout<<"     ###      ###        ########   #        #   #        #    ##    #        # ##---#    #     #     ##      ####         ###"<<endl;
xy(x + 30,y+ 18);
cout<<"   #######        #      ##    ##    #      #     #      #     ##     #      #  ##   #    #    #      ##      ##         #######"<<endl;
xy(x + 30,y+ 19);
cout<<"     ###       ###       ##    ##      ####         ####    ########    ####    ##    #   #####    #######    ########     ###"<<endl;
}
void console(int x,int y)
{
xy(x + 30 , y +20)
cout<<"..................................................................................."<<endl;
xy(x + 30 , y +21)
cout<<"   ...........................................................................      "<<endl;
xy(x + 30 , y +22)
cout<<"        ................................................................            "<<endl;
xy(x + 30 , y +23)
cout<<"             ....................................................                   "<<endl;
xy(x + 30 , y +24)
cout<<"                           ......................                                  "<<endl;
xy(x + 30 , y +25)
cout<<"                                 .........                                          "<<endl;



}

void xy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
