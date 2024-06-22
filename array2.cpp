#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        cout<<"marks for student "<<i+1<<": "<<endl;
        cin>>marks[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<"marks of student "<<i+1<<": ";
        cout<<marks[i]<<endl;
    }
    getch();
}
