#include<iostream>
using namespace std;
class marks
{
    int sub[3];
public:
    marks(int s1,int s2,int s3)
    {
        sub[0]=s1;
        sub[1]=s2;
        sub[2]=s3;
    }
    int operator[](int position)
    {
        return sub[position];
    }
};
int main()
{
    marks toki(11,22,33);
    cout<<toki[0]<<endl;
    cout<<toki[1]<<endl;
    cout<<toki[2]<<endl;
    return 0;
}
