#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    char s[]="a,b,c,d,e,f,g,h,i,j";
    //cout<<strtok(s,",");
    char *p=strtok(s,",");
    while(p!=NULL)//loop was used to print all the elements of the string
    {
        cout<<p<<endl;
        p=strtok(NULL,",");//to let the compiler know that we'll work with the remaining portion of the string
    }
    getch();
}
