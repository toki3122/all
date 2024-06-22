#include<iostream>
using namespace std;
int main()
{
    /*char ch[10];
    cout<<"enter a month : ";*/
    int n;
    cout<<"january=1 ";
    cout<<"february=2 ";
    cout<<"march=3"<<endl;
    cout<<"april=4 ";
    cout<<"may=5 ";
    cout<<"june=6"<<endl;
    cout<<"july=7 ";
    cout<<"august=8 ";
    cout<<"september=9"<<endl;
    cout<<"october=10 ";
    cout<<"november=11 ";
    cout<<"december=12"<<endl;
    cout<<"enter a number : ";
    cin>>n;
    switch(n)
    {
    case 1||3||5||7||9||11||12:
        cout<<"31 days";
        break;
    case 2:
        cout<<"28/29 days";
        break;
    default:
        cout<<"30 days";
        break;
    }
    return 0;

}
