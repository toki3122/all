#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        //rand function ta random number generate korte pare
        int random=rand()%5+1;//eta korlam jate amake shob shomoy 1 theke 5 value return kore
        cout<<"random number= "<<random<<endl;
    }
    getch();
}
