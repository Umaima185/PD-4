#include<iostream>
using namespace std;

void xy(int,int);
void app(int,int);

main(){
int x = 0,y = 0;
app(x,y);

}

void app(int x,int y)
{
cout<<"       #####      ##        ##      ##   ######      ####       ##         ##               "<<endl;
cout<<"       ##   #    ##  #        #    #     ##    #   #      #     ##         ##               "<<endl;
cout<<"       ##  #     #####          ##       ##---#   #        #    ##         ##               "<<endl;
cout<<"       ##        ##  #          ##       ##    #   #      #     ##         ##                "<<endl;
cout<<"       ##        ##  #         ####     ###     #    ####       #######    #######           "<<endl;
cout<<"********************************************************************************************"<<endl;

}


void xy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}