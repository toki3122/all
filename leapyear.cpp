#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int y;
    cout<<"enter a year : ";
    cin>>y;
    cout<<endl;
    if(y%4==0 && y%100!=0 || y%400==0)
        cout<<"this is a leap year";
    /*else if(y%400==0)
        cout<<"this is a leap year";*/
    else
        cout<<"this is not a leap year";
    getch();
}
