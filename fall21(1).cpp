//the amount of stupidity that i did before....
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int year;
    cout<<"Enter the month and year: ";
    cin>>s>>year;
    cout<<"you entered: "<<s;
    char ch=tolower(s[0]);
    char ch1=tolower(s[1]);
    char ch2=tolower(s[2]);
    s[0]=toupper(s[0]);
    s[1]=toupper(s[1]);
    s[2]=toupper(s[2]);
    cout<<endl<<"the abbreviation is: "<<s[0]<<s[1]<<s[2]<<endl;
    if(ch=='j' && ch1=='a' && ch2=='n')
        cout<<"This is month number "<<1<<" of the year "<<year;
    if(ch=='f' && ch1=='e' && ch2=='b')
        cout<<"This is month number "<<2<<" of the year "<<year;
    if(ch=='m' && ch1=='a' && ch2=='r')
        cout<<"This is month number "<<3<<" of the year "<<year;
    if(ch=='a' && ch1=='p' && ch2=='r')
        cout<<"This is month number "<<4<<" of the year "<<year;
    if(ch=='m' && ch1=='a' && ch2=='y')
        cout<<"This is month number "<<5<<" of the year "<<year;
    if(ch=='j' && ch1=='u' && ch2=='n')
        cout<<"This is month number "<<6<<" of the year "<<year;
    if(ch=='j' && ch1=='u' && ch2=='l')
        cout<<"This is month number "<<7<<" of the year "<<year;
    if(ch=='a' && ch1=='u' && ch2=='g')
        cout<<"This is month number "<<8<<" of the year "<<year;
    if(ch=='s' && ch1=='e' && ch2=='p')
        cout<<"This is month number "<<9<<" of the year "<<year;
    if(ch=='o' && ch1=='c' && ch2=='t')
        cout<<"This is month number "<<10<<" of the year "<<year;
    if(ch=='n' && ch1=='o' && ch2=='v')
        cout<<"This is month number "<<11<<" of the year "<<year;
    if(ch=='d' && ch1=='e' && ch2=='c')
        cout<<"This is month number "<<12<<" of the year "<<year;
    if(year<=1584)
        cout<<endl<<"invalid year input"<<endl;
    else if(year%4==0 && year%100!=0 || year%400==0)
        cout<<" which is a leap year";
    else
        cout<<" which is not a leap year";
    return 0;
}
