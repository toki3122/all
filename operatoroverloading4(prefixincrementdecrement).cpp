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
    //as we are working on only one value,so we don't need any parameters
    void operator++()
    {
        mark+=1;
    }
    friend void operator--(marks &obj);
};
void operator--(marks &obj)
{
    obj.mark-=1;
}
int main()
{
    marks n(58);
    cout<<"marks= ";
    n.display();
    ++n;
    cout<<"marks= ";
    n.display();
    --n;
    cout<<"marks= ";
    n.display();
    return 0;
}
