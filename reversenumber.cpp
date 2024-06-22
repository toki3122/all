#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,t,r,sum;
    cout<<"enter any number : ";
    cin>>n;
    t=n;
    sum=0;
    while(t!=0)
    {
        r=t%10;
        sum=sum*10+r;
        t=t/10;
    }
    cout<<"reversed number : "<<sum;
    getch();
}
