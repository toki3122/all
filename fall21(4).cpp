#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string m,n,b,v;
    fstream file("hardware.dat",ios::in||ios::out||ios::app)
    file<<"Record\t"<<" Tool_Name\t"<<" Quantity\t"<<" Cost"<<endl;
    vector<string>v;
    hello:
    cout<<"enter record number: ";
    cin<<m;
    if (m<1||m>100)
    {
        cout<<"Error! record number must be 1 to 100!!"<<endl;
        goto hello;
    }
    cout<<"enter tool name: ";
    getline(cin,n)
    cout<<"enter quantity: ";
    cin<<b;
    cout<<"enter cost: ";
    cin<<v;

}
