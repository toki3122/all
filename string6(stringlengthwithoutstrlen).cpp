#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char s1[]="ahnaf hossain";
    //we wanna use "strlen" without the function the function...then we work like this:
    int i=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    cout<<"length= "<<i;
    //lemme know if you don't understand
    getch();
}
