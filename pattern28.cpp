 #include<iostream>
 #include<conio.h>
 using namespace std;
 int main()
 {
     int row,col,n;
     cout<<"enter n : ";
     cin>>n;
     for(row=1;row<=n;row++)
     {
         for(col=1;col<=row;col++)
         {
             if(row==1||row==n||col==1||col==row)
                cout<<"*";//use row,col if you want
             else
                cout<<" ";
         }cout<<endl;
     }
     getch();
 }

