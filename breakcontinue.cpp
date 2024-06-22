#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1; i<=100;i=i+3)
    {
        if(i==10)
        {
            continue;//made the "cout" skip when it hit the condition.
        }
        if(i>13)
        {
           break;//stopped when it hit the condition.
        }
        cout<<i<<endl;
    }
    getch();
}
