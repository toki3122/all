#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num[]={10,4,5,3,9,8,31};
    int n,p=-1;
    cout<<"enter the value you want to search: ";
    cin>>n;
    for(int i=0;i<7;i++)
    {
        if(num[i]==n)
        {
            p=i+1;
        }
    }
    if(p==-1)
        cout<<"no entry found";
    else
        cout<<"entry found! position "<<p;
    getch();
}
