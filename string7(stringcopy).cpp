#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    char source[]="programming language";
    char target[]="language programming";
    strcpy(target,source);//here, the one we want to copy, will be the latter one and the one we will save the copied value, will be the first one
    cout<<"source: "<<source<<endl;
    cout<<"target: "<<target;
    getch();
}
