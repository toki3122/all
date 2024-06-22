#include<iostream>
#include<conio.h>
using namespace std;
int x=10;//global variable
int main()
{
    cout<<x<<endl;
    //int x=20;
    cout<<x<<endl;//compiler prioritizes local value
    //if we want to print global value now, we have to use scope resolution operator
    cout<<::x<<endl;
    //we can change the global value inside a function
    ::x=30;
    cout<<::x<<endl;
    //but...
    cout<<x<<endl;
    // now we will '/* */' the all of it and do the following;
    x=20;
    cout<<x<<endl;
    //yes it will work with the global value and "change" it

}
