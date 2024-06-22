#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    string sentence="yes, we went to class after we left the dorm";
    int st_we=sentence.find("we");
    int nd_we=sentence.find("we",st_we+1);
    int rd_we=sentence.find("we",nd_we+1);
    int c_pos=sentence.find('c');
    int d_pos=sentence.find('d');
    cout<<st_we<<endl;
    cout<<nd_we<<endl;
    cout<<rd_we<<endl;
    cout<<c_pos<<endl;
    cout<<d_pos<<endl;
    getch();
}
