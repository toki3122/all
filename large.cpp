#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers : ";
    cin>>a>>b>>c;
    if(a>b && a>c && b<c)
        cout<<"number 1 is the largest";
    else if(b>a && b>c)
        cout<<"number 2 is the largest";
    else
        cout<<"number 3 is the largest";

    getch();
}
