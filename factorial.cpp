#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the integer : ";
    cin>>n;
    m=1;
    for(int i=1;i<=n;i++)
    {
        m=m*i;
    }
    cout<<"factorial : "<<m;
    getch();
}
