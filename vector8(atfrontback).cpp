#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<3;i++)
    {
        v.push_back(i+1);
    }
    for(int i=0;i<3;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<v.at(0)<<endl;//accessing any element
    cout<<v.front()<<endl;//accessing first element
    cout<<v.back()<<endl;//accessing last element
}
