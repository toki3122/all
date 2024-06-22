#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"enter n : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            char a=64+row;
            cout<<" "<<a;
        }cout<<endl;
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            char b=64+row;
            cout<<" "<<b;
        }cout<<endl;
    }
    getch();
}

