#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;//to create a file, just declare an object under the class fstream
    file.open("2.txt",ios::in|ios::out);//then use the the member function open()...inside the function, add the file name you want to save
    //ios means input output stream, it's a class with member istream and ostream
    //ios::in for file input and ios::out for file output
    if(!file.is_open())
    {
        cout<<"error while opening the file";
    }else{
    cout<<"file opened successfully";
    file.close();
    //to close the file

    }
    return 0;
}
