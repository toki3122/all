#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    int n=rand()%10+1;
    hello:
    if(n<5)
    {
        n=rand()%10+1;
        goto hello;
    }
    cout<<n<<" equally spaced bin"<<endl;
    float m=71/float(n);
    float b=0;
    for(int i=0;i<=n;i++)
    {
        cout<<"Sin("<<b<<")"<<": "<<sin((3.1416*b)/180)<<endl;
        b+=m;
    }
}
