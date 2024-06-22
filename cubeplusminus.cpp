#include<iostream>
using namespace std;
int main()
{
    int n,sum=1;
    cout<<"enter n: ";
    cin>>n;
    cout<<"series: "<<endl;
    cout<<"1";
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            sum-=i*i*i;
            cout<<"-";
        }
        else
        {
            sum+=i*i*i;
            cout<<"+";
        }
        cout<<i<<"^3";
    }cout<<endl;
    cout<<"sum= "<<sum;
}
