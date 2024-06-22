#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    while(1)
    {
        int n,m;
    m=rand()%9+1;
    cout<<"enter your guess(between 1 to 9): ";
    cin>>n;
    if(n==m)
    {
        cout<<"right guess!!!"<<endl;
    }
    else
        cout<<"wrong guess"<<endl<<"the number was "<<m<<endl;
    }
    getch();
}


