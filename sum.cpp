#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number of terms : ";
    cin>>n;
    int m=(n-1)*2;
    for(int i=m;i>1;i=i-2)
    {
        sum=sum+pow(i,i);
    }
    cout<<"sum= "<<sum+1;
    getch();
}
