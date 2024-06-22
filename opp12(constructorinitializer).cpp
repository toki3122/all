#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    const int admissionfee;
    const int examfee;
    long long int id;
    student(int x,int y,long long int z)
    :admissionfee(x),examfee(y)
    {
        cout<<"admission fee: "<<admissionfee<<endl;
        cout<<"exam fee: "<<examfee<<endl;
        id=z;
        cout<<"id= "<<id;
    }
};
int main()
{
    student s1(15000,4000,20230105174);
    getch();
}
