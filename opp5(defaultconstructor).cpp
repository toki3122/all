#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
    student()//constructor er bhitore parameter chara striaght value rakha jay, etakei default constructor bole
    {
        id=2023010517;
        gpa=0.00;
    }
};
int main()
{
    student toki;//no brackets for default constructors
    toki.display();
    getch();
}

