#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,t,r,f,sum;
    cout<<"enter any number : ";
    cin>>n;
    t=n;
    sum=0;
    while(t!=0)
    {
        r=t%10;
        f=1;
        for(int i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        t=t/10;
    }
    if(sum==n)
        cout<<"this is a strong number!!";
    else
        cout<<"this is not a strong number!!";
    getch();
}
