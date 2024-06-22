#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int sum,n;
    cout<<"enter a number : ";
    cin>>n;
    sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);//pow(i,5)=i^2
    }
    cout<<"sum : "<<sum;
    getch();
}

