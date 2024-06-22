#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char  s1[]={'t','o','k','i'};//mainly, character type array is called a string
    //at the first code of array, we entered the vlues by grabbing an index and then putting in a value
    //we'll do the same thing for the string
    /*s1[0]='t';
    s1[1]='o';
    s1[2]='k';
    s1[3]='i';
    s1[4]='/0';*/
    //here, we have to keep in mind that to let
    //the compiler "figure out" the end of the string...
    //we have to input an extra null(\0) character
    cout<<s1;
    //by the way....we can just casually work with it like this
    //we don't wanna do extra work...
    char s2[]="Ahnaf Hossain Tokee";//line breaking character '\'
    cout<<s2;
    getch();
}
