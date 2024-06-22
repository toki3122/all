#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a[100];
    cout<<"enter the number of terms: ";
    cin>>n;
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<" "<<a[1];
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        cout<<" "<<a[i];
    }
    getch();
}
