#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
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
            if(col==1||row==1||row==n||col==2*row-1)
            cout<<"*";//use row,col,letter
            else
            cout<<" ";
        }cout<<endl;
    }
}
