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
        cout<<"mark= "<<mark<<endl;
    }
    marks operator++(int)
    //to make the compiler understand that we are working on the
    //suffix, we HAVE to use the 'int'
    {
        marks n(mark);
        mark+=1;
        return n;
    }
    marks operator--(int)
    {
        marks o(mark);
        mark-=1;
        return o;
    }
};
int main()
{
    marks num(58);
    num.display();
    (num++).display();
    num.display();
    (num--).display();
    num.display();
    return 0;
}
