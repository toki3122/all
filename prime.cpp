#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,count;
    count=0;
    cout<<"enter an integer : ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        cout<<"this is a prime number";
    else
        cout<<"not a prime number";
    getch();
}

