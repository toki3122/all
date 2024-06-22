#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,x,x1,x2,e,f;
    cout<<"enter a, b ,c: ";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        x=(-b)/(2*a);
        cout<<"x= "<<x;
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"x1= "<<x1<<endl<<"x2= "<<x2;
    }
    else if(d<0)
    {
        e=(-b)/(2*a);
        f=sqrt(-d)/(2*a);
        cout<<"x1= "<<e<<"+i"<<f<<endl;
        cout<<"x2= "<<e<<"-i"<<f<<endl;
    }
    return 0;
}
