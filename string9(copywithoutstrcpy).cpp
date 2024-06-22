#include<iostream>
#include<conio.h>
using namespace std;
//firstly, we made two strings global
char s1[1000];
char s2[1000];
void copy(char a[],char b[])//we created a function called copy to copy strings
{
    cout<<"enter string 1: ";
    gets(s1);//taking input of first string
    cout<<"enter string 2: ";
    gets(s2);//taking input of second string
    int j=0;//we use this for the index of string 2
    for(int i=0;s1[i]!='\0';i++)//we use i for the index of string 1
    {
        s1[i]=s2[j];//by doing this, we will save the the characters saved in each string of string 2 to string 1
        j++;//incrementing for moving onto the next index of string 2
    }
}
int main()
{
    copy(s1,s2);
    cout<<"after string copying 2 to 1:"<<endl<<"string 1: "<<s1<<endl<<"string 2: "<<s2;
    getch();
}

