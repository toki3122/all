#include<iostream>
using namespace std;
class person
{
public:
    void display()
    {
        cout<<"a person"<<endl;
    }
};
class student:public person
{
public:
    void display()
    {
        cout<<"a student"<<endl;
    }
};
class employee:public person
{
public:
    void display()
    {
        cout<<"an employee"<<endl;
    }
};
int main()
{
    student s;
    s.display();
    employee e;
    e.display();
    return 0;
}
