#include<iostream>
using namespace std;
int main()
{
    float n,sum=0;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }cout<<"sum: "<<sum;
}
