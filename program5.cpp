#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    float num1, num2;
    cout<<"enter two numbers= ";
    cin>>num1 >>num2;
    cout<<showpoint;//to show radix point!!
    cout<<fixed;//now its fixed to show the amount of numbers only to the right
    cout<<setprecision(10);//the amount of numbers to show!(left and right of radix point)
    float sum= num1+num2;
    cout<<setw(20)<< "sum is : "<<sum<<endl;//to make it look better....useless
    cout<<noshowpoint;//to stop showing radix point!!
    float sub= num1-num2;
    cout<<setw(20)<<"substraction is : "<<sub<<endl;
    float mul= num1*num2;
    cout<<setw(20)<<"multiplication is : "<<mul<<endl;
    float div= (float)num1/num2;//type casting!
    cout<<setw(20)<<"division is : "<<div<<endl;
    /*float rem=num1%num2;
    cout<<"remainder is : "<<rem<<endl;
    cout<<"have a nice day "<<name;
*/
    getch();
}
