#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"enter n: ";
    cin>>n;
    for(row=1;row<=n;row++)//printing row
    {
        for(col=1;col<=n-row;col++)//printing spaces
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)//printing number
        {
            //char a=64+row;
            cout<<row<<" ";//use *,col,a
        }cout<<endl;
    }
    for(row=n-1;row>=1;row--)//printing row
    {
        for(col=1;col<=n-row;col++)//printing spaces
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)//printing number
        {
            //char a=64+row;
            cout<<row<<" ";//use *,col,a
        }cout<<endl;
    }
    getch();
}

