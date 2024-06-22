#include<iostream>
#include<conio.h>
using namespace std;
int display(int a=10,int b=20)//we can save default values in a function just by defining the value with the parameter, as you can see
{
    cout<<a<<endl<<b<<endl;
}
int main()
{
    display();//here we did not enter any value, so the function will work with those default values
    display(25);//the first value in parameter will change to 25 now
    display(25,30);//both the values will change to 25 and 30
    getch();
}
