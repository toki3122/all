#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int A[10][10],i,j,row,col,sum=0;
   unko:
   cout<<"enter the row of the matrix: ";
   cin>>row;
   cout<<"enter the column of the matrix: ";
   cin>>col;
   if(row!=col)
   {
      cout<<"error!! diagonal not possible"<<endl;
      goto unko;
   }
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
      {
        cout<<"enter A["<<i+1<<"]["<<j+1<<"]: ";
        cin>>A[i][j];
      }
   }  cout<<"entered matrix: "<<endl;
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
      {if(i==j)
      {
        cout<<"diagonal element"<<j+1<<": "<<A[i][j]<<endl;
        sum=sum+A[i][j];
        }
      }
   } 
   cout<<"sum of diagonals: "<<sum;  
   getch();
}   