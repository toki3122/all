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
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            //char a=64+row;
            cout<<row;//use * or col instead of row
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
            //char a=64+row;
            cout<<row;//use * or col instead of row
        }cout<<endl;

    }
    getch();
}



