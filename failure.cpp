#include<iostream>
using namespace std;
int main()
{
    /*float a,s,d,f,g,h,j,k,l;
    cout<<"please enter 5 weights of students in kilograms : "<<endl;
    cin>>a>>s>>d>>f>>g;
    h=a+s+d+f+g;
    cout<<"total weight of those students : "<<h<<endl;
    j=h/5;
    cout<<"average weight : "<<j<<endl;
    k=h/.45359237;
    l=j/.45359237;
    cout<<"total weight of those students in pounds : "<<k<<endl;
    cout<<"average weight in pounds : "<<l;*/
    float a,s,d,f,g,h,j,k,l;
    cout<<"enter the price of 5 grocery in bdt : "<<endl;
    cin>>a>>s>>d>>f>>g;
    h=a+s+d+f+g;
    k=.15*h;
    j=k+h;
    l=j*.0091;
    cout<<"total price : "<<h<<endl;
    cout<<"total price after adding vat : "<<j<<endl;
    cout<<"vat : "<<k<<endl;
    cout<<"total+vat in usd : "<<l;
    return 0;
}
