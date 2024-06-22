#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter an alphabet : ";
    cin>>ch;
    ch=tolower(ch);
    switch(ch)
    {
    case 'a':
        cout<<"it's a vowel";
        break;
    case 'e':
        cout<<"it's a vowel";
        break;
    case 'i':
        cout<<"it's a vowel";
        break;
    case 'o':
        cout<<"it's a vowel";
        break;
    case 'u':
        cout<<"it's a vowel";
        break;
    default:
        cout<<"it's a consonant";

    }
}
