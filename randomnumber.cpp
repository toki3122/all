#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int random=rand()%5+1;
        cout<<"random number= "<<random<<endl;
    }
    getch();
}
