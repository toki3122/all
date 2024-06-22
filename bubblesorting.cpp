#include<iostream>
using namespace std;
int main()
{
    int n,data[100];
    cout<<"enter the number of entries: ";//data entry
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"entry number "<<i+1<<": ";//data input
        cin>>data[i];
    }cout<<endl<<"data:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<data[i];//showing the entered data
    }
    //bubble sorting:boro the choto ba choto the boro...evabe input gula ke shajano
    for(int i=0;i<n;i++)//picking values for comparison
    {
        for(int j=0;j<n-1;j++)//n-1 because we picked one element and then compared it with other elements
        {
            if(data[j]<data[j+1])//boro theke choto er jonno, amader baam er index value ta ke maximum korte hobe then por por komte komte last value ta ama minimum pabo
                //so amra ekhane ekta condition disi je jodi baam er index er value ta daan er value theke choto hoy tahole swapping korbe
            {
                //we did swapping here,
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    cout<<endl<<"data after ascending sort:";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<data[i];//boro theke choto print
    }
    for(int i=0;i<n-1;i++)//picking each value for comparison
    {
        for(int j=0;j<n-1;j++)//n-1 because we picked one element and then compared it with other elements
        {
            if(data[j]>data[j+1])//choto theke boro er jonno vice versa
            {
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    cout<<endl<<"data after descending sort:";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";//choto theke boro print
    }
    return 0;
}
