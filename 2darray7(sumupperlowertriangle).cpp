#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   int A[10][10],i,j,row,col,sum1=0,sum2=0;
   unko:
   cout<<"enter the row of the matrix: ";
   cin>>row;
   cout<<"enter the column of the matrix: ";
   cin>>col;
   if(row!=col)
   {
      cout<<"error!! triangle not possible"<<endl;
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
      {if(i<j)
      {
        sum1=sum1+A[i][j];
        }
      }
   }
   cout<<"sum of upper triangle: "<<sum1<<endl;

    for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
      {if(i>j)
      {
        sum2=sum2+A[i][j];
        }
      }
   }
   cout<<"sum of lower triangle: "<<sum2;
   getch();
}
