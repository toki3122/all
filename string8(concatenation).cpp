#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    //concatenation means attaching two strings
    //the strcat function attaches the former string to latter string and then saves it to latter string
    char s1[]="my name is ";
    char s2[]="toki";
    strcat(s1,s2);//here, it attached s1 to s2 and the  saved the new attached string to s1
    cout<<s1;
    getch();
}
