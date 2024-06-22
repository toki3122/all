#include<iostream>
#include<conio.h>
using namespace std;
class student//class kichu data ke encapsulate kore rakhe bahide kore rake, oi data gula ke ektu different way te access korte hoy
{
    //amra ekhane ekta integer ar ekta double type er data rakhsi
    public://etar dike ekhon takano lagbe na
    int id;
    double gpa;
};
int main()
{
    //data access korar way: class name likhbo, kono ekta naam likhbo, oi naam.data liklei oi data access kora jay arki
    student toki,ayse;
    toki.id=2023010517;
    toki.gpa=0.00;
    cout<<toki.id<<" "<<toki.gpa;
    ayse.id=2023010516;
    ayse.gpa=3.84;
    cout<<endl<<ayse.id<<" "<<ayse.gpa;
    getch();
}
