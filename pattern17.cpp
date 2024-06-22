#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"enter n : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";//working for space
        }
        for(col=1;col<=row;col++)
        {
            cout<<col;//working for number
        }cout<<endl;
    }
    getch();
}

