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
        for(col=n-1;col>=row;col--)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }
        for(col=row-1;col>=1;col--)
        {
         cout<<col;
        }cout<<endl;
    }
    getch();
}
