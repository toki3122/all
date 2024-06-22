#include<iostream>
#include<string>
using namespace std;
//inheritance is the process of obtaining the data members
//and functions from one class to another class
class person
{
    public:
    string name;
    int age;
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
};
class student: public person//student class inherits the whole public(data specifier) data of person class
{
    public:
    int id;
    void display2()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
};
int main()
{
    student s1;
    s1.id=101;
    s1.name="toki";
    s1.age=19;
    s1.display2();
    return 0;
}
