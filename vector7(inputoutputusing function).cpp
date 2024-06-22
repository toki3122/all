#include<iostream>
#include<vector>
using namespace std;
int n,m;
void input(vector<int>&v)
{
    cout<<"enter the amount of entry: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"entry no. "<<i+1<<": ";
        cin>>m;
        v.push_back(m);
    }
}
void output(vector<int>v)
{
    for(int i=0;i<n;i++)
    {
        cout<<"entry no. "<<i+1<<": "<<v[i]<<endl;
    }
}
int main()
{
    vector<int>v;
    input(v);
    output(v);
    return 0;
}
