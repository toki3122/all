#include<iostream>
using namespace std;
class marks
{
    int mark;
public:
    marks()
    {
        mark=0;
    }
    marks(int m)
    {
        mark=m;
    }
    void display()
    {
        cout<<mark<<endl;
    }
   void operator+=(int m)
   {
       mark=mark+m;
   }
   //if we want to take two parameters, rather than making it pre defined,
   //we have to use friend function
   //as the friend function is not a member function,
   //we have to call both values
   friend void operator-=(marks &obj, int n);
};
void operator-=(marks &obj, int n)
{
    obj.mark-=n;
}
int main()
{
    marks num(55);
    num.display();
    int x;
    cout<<"enter additional marks: ";
    cin>>x;
    num+=x;
    cout<<"marks= ";
    num.display();
    cout<<"enter marks deduction: ";
    cin>>x;
    num-=x;
    cout<<"marks= ";
    num.display();
    return 0;
}
