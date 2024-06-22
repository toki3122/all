#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,s;
    cout<<"enter the number : ";
    cin>>n;
    s=1;
    for(int i=2;i<=n;i++)
    {
       s=s*i;
    }
        cout<<"result : "<<s;
    getch();
}
