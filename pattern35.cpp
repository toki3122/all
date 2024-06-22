#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int col,row,n;
    cout<<"enter n: ";
    cin>>n;
    for(row=n/2;row<=n;row+=2)
    {
        //printing first spaces
        for(col=1;col<n-row;col+=2)
        {
         cout<<" ";
        }
        //printing first stars
        for(col=1;col<row+1;col++)
        {
            cout<<"*";
        }
        //printing second spaces
        for(col=1;col<n-row+1;col++)
        {
            cout<<" ";
        }
        //printing second stars
        for(col=1;col<row+1;col++)
        {
            cout<<"*";
        }cout<<endl;

    }
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }cout<<endl;
    }
    getch();
}
