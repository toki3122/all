#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<< "Enter a letter : ";
    cin>> ch;
    ch = tolower(ch);//to make the "uppercase" input "lowercase(for toupper it is vice versa)"
    cout<<endl;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout<< "it is a vowel";
    else
        cout<< "it is a consonant";

    return 0;
}

