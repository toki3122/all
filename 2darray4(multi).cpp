#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sum=0,first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;
    hello:
    cout<<"enter row and column for first matrix: ";
    cin>>r1>>c1;
    cout<<"enter row and column for second matrix: ";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"error!!"<<endl<<"column of first matrix is not equal to row of second matrix..."<<endl;
        goto hello;
    }
    //taking input for first matrix
    cout<<"enter the elements of first matrix: ";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<endl<<"enter first["<<i+1<<"]["<<j+1<<"]: ";
            cin>>first[i][j];
        }
    }
    //taking input for second matrix
    cout<<"enter the elements of second matrix: ";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<endl<<"enter second["<<i+1<<"]["<<j+1<<"]: ";
            cin>>second[i][j];
        }
    }
    cout<<"first matrix: "<<endl;
    for(i=0;i<r1;i++)
    {cout<<"\t";
        for(j=0;j<c1;j++)
        {
            cout<<first[i][j]<<" ";
        }cout<<endl;
    }cout<<"second matrix: "<<endl;
    for(i=0;i<r2;i++)
    {cout<<"\t";
        for(j=0;j<c2;j++)
        {
            cout<<second[i][j]<<" ";
        }cout<<endl;
    }        cout<<"result: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
    for(k=0;k<c1;k++)
    {
        sum=sum+first[i][k]*second[k][j];
    } result[i][j]=sum;
        sum=0;
        }}
    for(i=0;i<r1;i++)
    {cout<<"\t";
        for(j=0;j<c2;j++)
        {
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
    getch();
}
