#include<iostream>
#include<conio.h>
using namespace std;
int addition(int,int);//if we define a function after declaring main function, then we have to declare the function's prototype before the main function
//obviously, the former process is easier to use
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);
int main()
{
    addition(10,20);
    subtraction(10,20);
    multiplication(10,20);
    division(10,20);
    cout<<"all functions have been called";
    getch();
}
int addition(int a, int b)
{
    int add=a+b;
    cout<<"sum="<<add<<endl;
}
int subtraction(int a, int b)
{
    int result=a-b;
    cout<<"subtraction="<<result<<endl;
}
int multiplication(int a, int b)
{
    int result=a*b;
    cout<<"multiplication="<<result<<endl;
}
int division(int a, int b)
{
    float result=(float)a/b;//type casting
    cout<<"division="<<result<<endl;
}
