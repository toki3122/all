#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,m,n1,n2,rem,gcd,lcm;
    cout<<"enter 1st number : ";
    cin>>n1;
    cout<<"enter 2nd number : ";
    cin>>n2;
    n=n1;
    m=n2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(n*m)/gcd;
    cout<<"GCD= "<<gcd<<endl;
    cout<<"LCM= "<<lcm;
    getch();
}
