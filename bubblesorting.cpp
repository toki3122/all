#include<iostream>
using namespace std;
int main()
{
    int n,data[100];
    cout<<"enter the number of entries: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"entry number "<<i+1<<": ";
        cin>>data[i];
    }cout<<endl<<"data:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<data[i];
    }
    //bubble sorting:
    for(int i=0;i<n-1;i++)//n-1 because one element won't move from it's original position
    {
        for(int j=0;j<n-1;j++)//n-1 because we picked one element and then compared it with other elements
        {
            if(data[j]<data[j+1])
            {
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    cout<<endl<<"data after ascending sort:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<data[i];
    }
    for(int i=0;i<n-1;i++)//n-1 because one element won't move from it's original position
    {
        for(int j=0;j<n-1;j++)//n-1 because we picked one element and then compared it with other elements
        {
            if(data[j]>data[j+1])
            {
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    cout<<endl<<"data after descending sort:";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    return 0;
}
