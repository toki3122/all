#include<iostream>
using namespace std;
class marks
{
    int mark;
public:
    marks(int m)
    {
        mark=m;
    }
    void display()
    {
        cout<<"marks= "<<mark<<endl;
    }
    marks *operator->()//"->" returns a pointer, that's why
    {
        return this;
        //*this will indicate the address of the local variable
    }
};
int main()
{
    marks o(70);
    o.display();
    o->display();
}

