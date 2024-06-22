#include<iostream>
#include<conio.h>
using namespace std;
/*what recursion does here:
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
then again,
int fact(int n-1)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-2);
again,
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-2);
this keeps going until n is equal to 1
}
}
}
*/
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<endl<<"the factorial of "<<n<<" is: "<<fact(n);
    getch();
}
