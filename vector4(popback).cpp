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
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    v.pop_back();//pop_back() deletes a last member from the vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}
