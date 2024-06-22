#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number for students: ";
    cin>>n;
    int stu[n];
    for(int i=0;i<n;i++)
    {
        cout<<"marks for student "<<i+1<<": ";
        cin>>stu[i];
        sum=sum+stu[i];
    }
    cout<<"total marks: "<<sum<<endl;
    float avg=sum/n;
    cout<<"average: "<<avg<<endl;
    //maximum and minimum
    int max=stu[0];
    int min=stu[0];
    for(int i=1;i<n;i++)
    {
        if(max<stu[i])
            max=stu[i];
        if(min>stu[i])
            min=stu[i];
    }
    cout<<"maximum number= "<<max<<endl;
    cout<<"minimum number= "<<min<<endl;
    getch();
}
