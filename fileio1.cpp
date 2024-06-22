#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string text;
    fstream file;
    file.open("example.txt",ios::out|ios::in);
    cout<<"write text to be written on file: "<<endl;
    getline(cin,text);
    file<<text<<endl;
    file>>text;cout<<"the text written is: "<<endl;
    cout<<text<<endl;
    file.close();
    return 0;
}
