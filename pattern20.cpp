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
        for(col=1;col<=row;col++)//use n instead of row to see what happens
        {
            cout<<" "<<row*col;//use +,-,/,% and change places to see what happens
        }cout<<endl;
    }
    getch();
}
