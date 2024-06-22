#include<iostream>
using namespace std;
void pointer1()
{
    int a=10;
    int *aptr;//pointer in just another variable that stores the address of a variable
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;//dereferencing, meaning it will show the value stored in that address
}
void pointer2()
{
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl;
    *aptr=20;//we can work through the pointer on the variable it is pointing
    cout<<a<<endl;//the value will be updated
}
void pointer_arithmatic1()
{
    int a=10;
    int *aptr=&a;
    cout<<aptr<<endl;
    aptr++;
    //the address will be incremented,
    //but not by 1,it will be 4 as int
    //takes up 4 bytes of space and i am
    //adding an int to the address
    cout<<aptr<<endl;
}
void pointer_arithmatic2()
{
    char ch='a';
    char *cptr=&ch;
    cout<<cptr<<endl;
    cptr++;
    //this time it will be 1 byte increment
    //as its a character data type
    cout<<cptr<<endl;
}
void pointer_array()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl;//prints the zeroth element of the array
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    //if you dont wanna use any pointer,
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;
        //arr++ is illegal
    }
}
void pointer_pointer()
{
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;
    int **q=&p;
    cout<<*q<<endl;//the location of *p
    cout<<**q<<endl;//the value stored in *p
}
int increment(int *a)
{
    int temp=*a;
    temp++;
    return temp;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    //pointer1();
    //pointer2();
    pointer_arithmatic1();
    //pointer_arithmatic2();
    //pointer_array();
    //pointer_pointer();
    //int a=2;
    //int *aptr=&a;
    //int c=increment(aptr);
    //cout<<c<<endl;
    //int b=4;
    //swap(&c,&b);
    //cout<<c<<" "<<b<<endl;
}
