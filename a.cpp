#include<iostream>
using namespace std;
int main()
{
    int n,m=1;
    cout<<"enter n: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        m=m*i;
    }cout<<"factorial of "<<n<<" is= "<<m;
    return 0;
}
