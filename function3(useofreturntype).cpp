#include<iostream>
#include<conio.h>
using namespace std;
double addition(double,double);//declaration: return type+function name+(+parameter,parameter+)(the number of parameters may vary)
int main()
{
    //int result=addition(10,20);
    cout<<"sum= "<<addition(10.3,20.4);
    getch();
}
double addition(double a,double b)//the type of data the function will return= double
{
    double sum=a+b;
    return sum;//if we use return,it gives away the value after the statement "return"
}
