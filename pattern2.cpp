#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter n : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)//pick a row and then print the value "the number of row" times
        {
            cout<<" "<<row;
        }cout<<endl;
    }
    getch();
}

