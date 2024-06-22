#include<iostream>
using namespace std;
void entry(int a);
void search(int n,int m);
int num[100];
int main()
{
    int n,m;
    cout<<"enter the number of elements in array: ";
    cin>>m;
    cout<<"start data entry: "<<endl;
    entry(m);
    cout<<"enter the value you want to search: ";
    cin>>n;
    search(n,m);
}
void search(int n,int m)
{int p=-1;
     for(int i=0;i<m;i++)
    {
        if(num[i]==n)
        {
            p=i+1;
        }
    }
    if(p==-1)
        cout<<"no entry found";
    else
        cout<<"entry found! position "<<p;
}
void entry(int m)
{
    for(int i=0;i<m;i++)
        cin>>num[i];
}
