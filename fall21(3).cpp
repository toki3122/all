#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int b,n,m,l;
    float a[11];
       for(int i=0;i<11;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<360;i++)
    {
        n=rand()%6+1;
        m=rand()%6+1;
        b=n+m;
        for(int j=2;j<=12;j++)
        {
            l=j-2;
            if(b==j)
            {
                a[l]+=1;
            }
        }
    }
    cout<<"summation: \t";
    for(int i=2;i<=12;i++)
    {
        cout<<i<<"   ";
    }cout<<endl<<endl;
     cout<<"occurence: \t";
    for(int i=0;i<11;i++)
    {
        cout<<a[i]<<"  ";
    }cout<<endl<<endl;
     cout<<"percentage: \t";
    for(int i=0;i<11;i++)
    {
        cout<<int((a[i]/360)*100)<<"   ";//type casting to make it look better...idk why i did that
    }cout<<endl<<endl;
    cout<<"Approximately one-sixth(0.166 or 16.66%) of all the rolls should be 7"<<endl;
    cout<<"in this case: "<<((a[6]/360)*100)<<"%"<<endl;
    if(a[6]==16.66)
        cout<<"The rolling is reasonable."<<endl;
    else
        cout<<"The rolling is not reasonable."<<endl;

}
