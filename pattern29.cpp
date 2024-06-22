 #include<iostream>
 #include<conio.h>
 using namespace std;
 int main()
 {
     int row,col,n;
     cout<<"enter n : ";
     cin>>n;
     for(row=n;row>=1;row--)
     {
         for(col=1;col<=n;col++)
         {
             if(row==col||row+col==n+1)
                cout<<"*";//use row,col if you want
             else
                cout<<" ";
         }cout<<endl;
     }
     getch();
 }

