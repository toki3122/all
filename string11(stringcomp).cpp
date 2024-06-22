#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    char s1[50];
    cout<<"enter string1: ";
    gets(s1);
    char s2[50];
    cout<<"enter string2: ";
    gets(s2);
    int d=strcmp(s1,s2);//strcmp compare kore duita string ke, jodi same hoy string tahole 0 return kore, same na hole 0 return kore na(1st string boro hole + ar second ta boro hole - value return kore)
    cout<<d<<endl;
    if(d==0)
        cout<<"strings are equal";
    else
        cout<<"strings are not equal";
    getch();
}

