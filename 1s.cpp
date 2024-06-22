//exercise code no. 01
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your age : ";
    cin>>n;
    if(n<18)
        cout<<endl<<"you are a child.";
    else if(n>=18 && n<=65)//you can use "if" here instead of "else if"
        cout<<endl<<"you are an adult.";
    else
        cout<<endl<<"you are a senior citizen.";//you can use "if" instead of "else"
    return 0;
}
