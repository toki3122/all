//Destructors are usually used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed
#include<iostream>
using namespace std;
class ill
{
    public:
    ill();
    ~ill();
    void display();
};
ill::ill()
{
    cout<<"i am constructor"<<endl;
}
ill::~ill()
{
    cout<<"i am destructor"<<endl;//you cannot overload a destructor
}
void ill::display()
{
    cout<<"headache"<<endl;
}
int main()
{
    ill flu;
    flu.display();
    return 0;
}
