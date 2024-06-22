#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sum,n;
    cout<<"enter a number : ";
    cin>>n;
    sum=0;
    while(n!=0)
    {
        sum=sum+n;
        n--;
    }
    cout<<"sum : "<<sum;//1+2+3+4+5+6+7+8+9+...+n
    getch();
}
