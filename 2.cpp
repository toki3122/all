//exercise code no. 02
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your mark : ";
    cin>>n;
    if(n<0 && n>100)
        cout<<"invalid input!";
    else if(n<40)
    {
        cout<<"letter grade: F";
        cout<<endl<<"grade point: 0.00";
    }
    else
    {
     if(n>=40 && n<45)
    {
        cout<<"letter grade: D";
        cout<<"grade point: 2.00";
    }
     else if(n>=45 && n<50)
    {
        cout<<"letter grade: C";
        cout<<"grade point: 2.25";
    }
     else if(n>=50 && n<55)
    {
        cout<<"letter grade: C+";
        cout<<"grade point: 2.50";
    }
    else if(n>=55 && n<60)
    {
        cout<<"letter grade: B-";
        cout<<"grade point: 2.75";
    }
     else if(n>=60 && n<65)
    {
        cout<<"letter grade: B";
        cout<<"grade point: 3.00";
    }
     else if(n>=65 && n<70)
    {
        cout<<"letter grade: B+";
        cout<<"grade point: 3.25";
    }
    else if(n>=70 && n<75)
    {
        cout<<"letter grade: A-";
        cout<<"grade point: 3.50";
    }
     else if(n>=75 && n<80)
    {
        cout<<"letter grade: A";
        cout<<"grade point: 3.75";
    }
     else
    {
        cout<<"letter grade: A+"<<endl;
        cout<<"grade point: 4.00";
    }

    }
    return 0;
}

