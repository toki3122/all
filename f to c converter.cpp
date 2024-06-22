#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int f,c;
    cout<<"input temperature in fahrenheit : ";
    cin>>f;
    cout<<endl;
    c=5*((f-32)/9);
    cout<<"temperature in celcius is : "<<c;


    getch();
}
