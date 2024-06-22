#include<iostream>
#include<conio.h>
using namespace std;
/*int square()//if we don't declare the parameter, we can't store or work with an input value
{
    int result=5*5;//look here, we did not take an input value, instead we took a value without declaring any variable
    cout<<result;
}*/
int square(int n)
{
    int result=n*n;//but here, we gave a parameter, so we can give input values to the parameter
    cout<<"square of "<<n<<"= "<<result<<endl;
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    square();
    getch();
}

