#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,col,row;
    int A[10][10],B[10][10],C[10][10],D[10][10];
    cout<<"enter the number of rows: ";
    cin>>row;
    cout<<"enter the number of columns: ";
    cin>>col;
    cout<<"enter the elements of matrix: "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"enter A["<<i+1<<"]["<<j+1<<"]: ";
            cin>>A[i][j];
        }
    }
    cout<<"A= ";
    for(i=0;i<row;i++)
    {cout<<"\t";
        for(j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"enter B["<<i+1<<"]["<<j+1<<"]: ";
            cin>>B[i][j];
        }
    }
    cout<<"B= ";
    for(i=0;i<row;i++)
    {cout<<"\t";
        for(j=0;j<col;j++)
        {
            cout<<B[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"addition: "<<endl;
    cout<<endl<<"C= ";
    for(i=0;i<row;i++)
    {cout<<"\t";
        for(j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j];
        }cout<<endl;
    }
    cout<<endl<<"substaction: "<<endl;
    cout<<endl<<"D= ";
    for(i=0;i<row;i++)
    {cout<<"\t";
        for(j=0;j<col;j++)
        {
            D[i][j]=A[i][j]-B[i][j];
            cout<<D[i][j];
        }cout<<endl;
    }
    getch();
}
