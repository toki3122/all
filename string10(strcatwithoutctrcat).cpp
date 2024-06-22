#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //using strcat without strcat
    char s1[50]="my name is ";//we needed to "tell" the size of the 1st string so that we can increase the size of s1(look below)
    char s2[]="toki";
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;//determining the length of s1
    }
    while(s2[j]!='\0')
    {
        s1[i+j]=s2[j];//increasing the length of s1 and then into those increased indexes, saving the value of s2
        j++;//incrementing so that we move onto the next index of s2
    }
    cout<<s1;
    getch();
}

