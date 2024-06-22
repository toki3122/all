#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter any integer : ";
    cin>>num;
    (num%2==0)? cout<<num<<" is even":cout<<num<<" is odd";
    /*int max=(x>y)?x:y;//if the statement before "?" is true then max=x other wise max=y*/
    //cout<<max;
    getch();
}
