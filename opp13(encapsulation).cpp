#include<iostream>
#include<string>
using namespace std;
class student
{//declaring any data in class is called encapsulation
private:
    string name;//keeping any data in private is called data hiding
//to use a data from private, w need setter and getter function
public:
    void setname(string x)
    {
        name=x;
    }
    string getname()
    {
        return name;
    }
};
int main()
{
    student s1;
    s1.setname("toki");
    cout<<s1.getname();
    return 0;
}
