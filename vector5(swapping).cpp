#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=5;i++)
    {
        v.push_back(i);
    }
    //v.pop_back();
    vector<int>::iterator it;
    cout<<"v: ";
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    vector<int>v1(5,50);//specification of members and values
    cout<<"v1: ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }cout<<endl;
    swap(v,v1);//swap() just swaps the values of two vectors
    cout<<"v: ";
    for(auto element:v)
    {
        cout<<element<<" ";
    }cout<<endl;
    cout<<"v1: ";
    for(auto element:v1)
    {
        cout<<element<<" ";
    }
    //there's no issue regarding the sizes,
    //they can be same or not be the same
    return 0;
}
