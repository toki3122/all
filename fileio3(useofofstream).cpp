#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("2.txt");
    if(!file.is_open())
    {
        cout<<"unable to open the file"<<endl;
    }
    else
    {
        file<<"hello"<<endl;
        file<<"this is file handling";
        file.close();
        cout<<"successfully written to the file, open it and check it out";

    }
    return 0;
}
