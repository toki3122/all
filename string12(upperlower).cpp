#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    char name[]="ahnaf";
    strupr(name);//full string ke upper case e transform kore
    cout<<name<<endl;
    strlwr(name);//full string ke lower case transfer kore
    cout<<name;
    getch();
}
