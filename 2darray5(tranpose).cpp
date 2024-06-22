#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[10][10],transpose[10][10],i,j,row,col;
    cout<<"enter the number of rows and columns for the matrix: ";
    cin>>row>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"enter A["<<i+1<<"]["<<j+1<<"]: ";
            cin>>A[i][j];
        }
    }
    cout<<"entered matrix: "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=A[i][j];
        }
    }
    cout<<"transpose matrix: "<<endl;
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }
    getch();
}
