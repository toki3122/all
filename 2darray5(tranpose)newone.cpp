#include<iostream>
#include<conio.h>
using namespace std;
int row,col,i,j;
void transp(int a[][10],int b[][10])//transpose er kaaj ta amra ekta function diye korsi, ekhane 2d aray dekhe amader second dimension ta bole dite hoise
{
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            b[j][i]=a[i][j];
        }
    }
}
int main()
{
    int A[10][10],transpose[10][10];
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
    transp(A,transpose);
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
