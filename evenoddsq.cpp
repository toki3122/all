#include<iostream>
using namespace std;
int main()
{
    int n,sum=1,num=3;
    cout<<"enter the number of terms: ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-(num*num);
        }
        if(i%2!=0)
        {
            sum=sum+(num*num);
        }
        num=num+2;
    }
    cout<<"sum="<<sum;
}
