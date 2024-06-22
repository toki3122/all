#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("1.txt",ios::in);
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    return 0;
}
