#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char s1[30];
    cout<<"enter your full name: ";
    gets(s1);//cin for string is gets()
    cout<<"your name: "<<s1;//users enters their name and then the code prints the name
    getch();
}
