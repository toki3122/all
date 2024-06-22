#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,array1[30],array2[31],i;
    cout<<"enter the number of elements: ";
    cin>>n;
    cout<<"data entry: ";
    for(i=0;i<n;i++)
    {
        cin>>array1[i];
    }cout<<"array1: ";
    for(i=0;i<n;i++)
    {
        cout<<array1[i]<<" ";
    }
    //copying all the elements
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }cout<<endl;
    cout<<"array2: ";
    for(i=0;i<n;i++)
    {
        cout<<array2[i]<<" ";
    }
    getch();
}
