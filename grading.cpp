#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mark;
    cout<<"enter your marks : ";
    cin>>mark;
    if(mark<0)
        cout<<"invalid input";
    else if(mark>100)
        cout<<"invalid input";
    if(mark<33)
        {cout<<"sorry, failed"<<endl;
        cout<<"have fun!!";}
    else
    {
        cout<<"passed"<<endl;
        if(mark>=80)
            cout<<"letter grade : A+";
        else if(mark>=70)
            cout<<"letter grade : A";
        else if(mark>=60)
            cout<<"letter grade : A-";
        else if(mark>=50)
            cout<<"letter grade : B";
        else if(mark>=40)
            cout<<"letter grade : C";
        else if(mark>=33)
            cout<<"letter grade : D";

    }
    getch();
}

