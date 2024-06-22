#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float p,r,s,pf,v,i,z,l,t;
    cout<<"enter voltage: ";
    cin>>v;
    cout<<"enter impedance: ";
    cin>>z;
    cout<<"enter theta: ";
    cin>>l;
    t=3.1416*l/180;
    i=v/z;
    pf=cos(t);
    p=v*i*pf;
    r=v*i*sin(t);
    s=sqrt(p*p+r*r);
    cout<<"Power Function: "<<pf;
    cout<<endl<<"real power: "<<p;
    cout<<endl<<"reactive power: "<<r;
    cout<<endl<<"apparent power: "<<s;
    return 0;
}
