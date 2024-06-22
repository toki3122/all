#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char s1[]="ahnaf";
    //now, we are printing the string by grabbing each character
    int i=0;
    while(s1[i]!='\0')
    {
        cout<<s1[i]<<endl;
        i++;
    }

    getch();
}
