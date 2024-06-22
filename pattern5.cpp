#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    char a;
    cout<<"enter n : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            a=64+row;
            cout<<" "<<a;
        }cout<<endl;
    }
    getch();
}
