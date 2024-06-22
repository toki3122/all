#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file;
    string name;
    file.open("1.txt",ios::out|ios::app);
    cout<<"enter name: ";
    getline(cin,name);
    file<<name<<endl;
    file.close();
    cout<<"stored the data successfully";
}
