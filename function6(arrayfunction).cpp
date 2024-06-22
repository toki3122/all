#include<iostream>
#include<conio.h>
using namespace std;
int displayarray(int num[],int size)
//process to make an array a parameter of a function:
//return type+name+(+return type of the array+anyname(the same way we use parameter)+[]+,+more parameters if needed+)
//we have to keep in mind that for 1d array, we don't have to tell the size of the array
{
    for(int i=0;i<size;i++)
        cout<<num[i]<<" ";
}
int main()
{
    int number[5]={1,2,3,4,5};
    displayarray(number,3);//no size, just name of the array
    getch();
}
