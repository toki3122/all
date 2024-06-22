#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string>v;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    for(int i=0;i<5;i++)
    {
        string m;
        cout<<"enter item: ";
        cin>>m;
        v.push_back(m);
    }
    v.pop_back();
        for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    v.insert(v.begin()+2,"coffee");
        for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
        for(int i=0;i<v.size();i++)
    {
        if(v[i]=="sugar")
            v[i]="honey";
    }
        for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
        for(int i=0;i<v.size();i++)
    {
        if(v[i]=="milk")
            v.erase(v.begin()+i);
    }
        for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
