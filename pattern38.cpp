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
        for(col=1;col<=n;col++)
        {
            if(row==n/2||col==n/2)
                cout<<"*";
            else
                cout<<" ";

        }cout<<endl;
    }
    getch();
}
