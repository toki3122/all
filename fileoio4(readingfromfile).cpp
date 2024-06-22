#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("3.txt");
    if(!file.is_open())
    {
        cout<<"error while opening the file";
    }
    else
    {
        cout<<"reading from the file contents"<<endl ;
        string line;
        while(file.good())
        {
            getline(file,line);
            cout<<line<<endl;
        }

    }
    return 0;
}
