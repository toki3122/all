#include<iostream>
using namespace std;
class point
{
private:
    int x;
    int y;
public:
    void display()
    {
        cout<<"values: "<<endl<<x<<endl<<y<<endl;
    }
     void setvalue(int a,int b)
    {
        x=a;
        y=b;
    }
    void swap(point &p)
    {
        int temp1=x;
        int temp2=y;
        x=p.x;
        y=p.y;
        p.x = temp1;
        p.y = temp2;
    }
};
int main()
{
    point ob1,ob2;
    int n,m,n1,m1;
    cout<<"1st data for ob1: ";
    cin>>n;
    cout<<"2nd data for ob1: ";
    cin>>m;
    cout<<"1st data for ob2: ";
    cin>>n1;
    cout<<"2nd data for ob2: ";
    cin>>m1;
    ob1.setvalue(n,m);
    ob2.setvalue(n1,m1);
    ob1.swap(ob2);
    ob1.display();
    ob2.display();

}
