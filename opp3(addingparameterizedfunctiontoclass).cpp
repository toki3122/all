#include<iostream>
#include<conio.h>
using namespace std;
class student
{//class e usually duita part thake ekta public arekta private, private part ta main function normally access korte parena
    //public part ta ke normally access korte pare
private:
    int id;
    double gpa;
    public:
    void display()
    {
        cout<<id<<" "<<gpa<<endl;//ami data gula print korar jonno alada ekta function likhsi ekhane
    }
    void setvalue(int x,double y)//private part ta access korar way: alada ekta function declare kore oita theke private data access kora jay
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student toki,ayse;
    toki.setvalue(2023010517,0.00);//data boshanor function
    toki.display();//data print korar function
    ayse.setvalue(2023010516,3.84);
    ayse.display();
    getch();
}
