//exercise code no. 03
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter year : ";
    cin>>n;
    if(n%4==0)
        cout<<endl<<"this is a leap year";
    else if(n%400==0)
        cout<<endl<<"this is a leap year";

    else
        cout<<endl<<"this is not a leap year";
    return 0;
}

