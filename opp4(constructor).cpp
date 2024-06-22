//constructor is a special kind of function that initializes the values of class
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
    }//constructor mainly normal function er way tei kaaj korbe, but etar extra ekta kaaj holo initialization
    //etar arekta advantage holo constructor ke alada kore call dite hoy na
    student(int x,double y)//constructor has to be named as the same name of the class NO RETURN TYPE
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student toki(2023010517,0.00),ayse(2023010516,3.84);//SEE, NO NEED TO CALL THE FUNCTION
    toki.display();
    ayse.display();
    getch();
}
