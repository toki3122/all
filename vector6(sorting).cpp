#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=5;i>=1;i--)
    {
        v.push_back(i);
    }
    for(auto element:v)
    {
        cout<<element<<" ";
    }cout<<endl;
    sort(v.begin(),v.end());//sort() just sorts the vector numerically/alphabetically
    for(auto element:v)
    {
        cout<<element<<" ";
    }
}
