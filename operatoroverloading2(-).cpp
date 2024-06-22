#include<iostream>
using namespace std;
class num
{
    int n1,n2;
public:
    num()
    {
        n1=0;
        n2=0;
    }
    num(int num1,int num2)
    {
        n1=num1;
        n2=num2;
    }
    void display()
    {
        cout<<n1<<endl<<n2;
    }
    num operator-(num m);
};
// we can do operator overloading outside of class too
num num::operator-(num m)
//there's only one parameter because the "n" object calls the operator
//and because of that,the first object will be automatically passed
{
    num temp;
    temp.n1=n1-m.n1;
    temp.n2=n2-m.n2;
    return temp;
}
int main()
{
    num n(30,40),b(10,20);
    num v=n-b;
    v.display();
}
