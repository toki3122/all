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
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";//working for space
        }
        for(col=1;col<=row;col++)
        {
            //char a=64+row;
            cout<<row;//working for number
        }cout<<endl;
    }
    getch();
}
