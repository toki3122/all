#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[2][3];
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<"enter A["<<row+1<<"]["<<col+1<<"]: ";
            cin>>A[row][col];
            cout<<endl;
        }
    }
    //printing 2d array
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<A[row][col]<<" ";
        }cout<<endl;
    }

    getch();
}

