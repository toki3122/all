//sum=1-2+3-4+5-6+7-....
//sum=(1+3+5+7+...)-(2+4+6+8+...)
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cout<<"enter the number : ";
    cin>>n;
    a=b=c=0;
    for(int i=1;i<=n;i++)
    {
      if(i%2==0)
      {
          a=a+i;
      }
      else
      {
          b=b+i;
      }

    }
    c=b-a;
    cout<<"sum : "<<c;
    getch();
}
