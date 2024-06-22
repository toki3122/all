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
            cout<<" "<<"*";//enter col, signs to have fun
        };
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" "<<"*";//enter col, signs to have fun
        }cout<<endl;
    }
    getch();
}

