#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter n : ";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            char a=64+col;
            cout<<" "<<a;
        }cout<<endl;
    }
    getch();
}



