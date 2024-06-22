#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number : ";
    cin>>n;
    cout<<endl;
    cout<<"the multiplication table : "<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"=";
        m=n*i;
        cout<<m<<endl;
    }
    getch();
}
