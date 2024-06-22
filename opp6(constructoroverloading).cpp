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
    //function overloading er motoi contructor keo overload kora jay, mane eki naam er koyekta function but parameter different diye deya jay arki
    student()//default constructor ta
    {
        id=2023010517;
        gpa=4.00;
    }
    student(int x, float y)//normal je way te amra constructor use kori
    {
        id=x;
        gpa=y;
    }

};
int main()
{
    student sadab,toki(2023010517,0.00),ayse(2023010516,3.84);
    sadab.display();
    toki.display();
    ayse.display();
    getch();
}


