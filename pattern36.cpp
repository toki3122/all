#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int col,row,n;
    cout<<"enter n: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            if(col==1||col==2*row-1)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            if(col==1||col==2*row-1)
            cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
}
