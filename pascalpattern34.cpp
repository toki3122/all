#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,col,row;
    cout<<"enter n: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        int m=1;
        for(col=1;col<=n-row;col++)
        {
        cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<m<<" ";
            m=m*(row-col)/col;
        }cout<<endl;
    }
     getch();
}
