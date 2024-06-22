#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,n,c;
    a=0;
    b=1;
    cout<<"enter n : ";
    cin>>n;
    cout<<a;
    cout<<" ";
    cout<<b;
    cout<<" ";
    for(int i=1;i<=n-2;i++)
    {
       c=a+b;
       cout<<c;
       cout<<" ";
       a=b;
       b=c;
    }
    getch();
}

