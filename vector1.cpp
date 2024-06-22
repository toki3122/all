//vector is kinda like a dynamic array...it's easier to use
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;//declaration: vector<datatype>name
    v.push_back(1);//value entry= name.push_back(the value we wanna keep)
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //printing values
    for(int i=0;i<v.size();i++)//v.size() gives the number of values stored in the vector
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
