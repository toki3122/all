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
        cout<<v[i]<<" ";
    }cout<<endl;
    v.insert(v.begin()+1,5);//adding value to certain position
    for(int i=0;i<4;i++)//now there are 4 elements
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    v.erase(v.begin()+1);//deletes a value from a certain position
    for(int i=0;i<3;i++)//now there are 3 values
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    v.clear();
    cout<<v.size();
}

