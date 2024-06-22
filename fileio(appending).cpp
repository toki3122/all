#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("4.txt",ios::in|ios::out|ios::app);
    if(!file.is_open())
    {
        cout<<"error while opening file"<<endl;
    }
    else{
        cout<<"file opened successfully"<<endl;
        cout<<"writing to the file"<<endl;
        file<<"hello user"<<endl;
    }
    return 0;
}
