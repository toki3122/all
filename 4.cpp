//exercise code no. 04
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,n,m;
    cout<<"enter five integers: ";
    cin>>a>>b>>c>>d>>e;
    n=((a>b)?(((a>c)?((a>d)?(a>e? a:e):(d>e? d:e)):(c>d)?(c>e? c:e):(d>e? d:e))):(((b>c)?((b>d)?(b>e? b:e):(d>e? d:e)):((c>d)?(c>e? c:e):(d>e? d:e)))));
    cout<<n<<" is the largest"<<endl;
    m=((a<b)?(((a<c)?((a<d)?(a<e? a:e):(d<e? d:e)):(c<d)?(c<e? c:e):(d<e? d:e))):(((b<c)?((b<d)?(b<e? b:e):(d<e? d:e)):((c<d)?(c<e? c:e):(d<e? d:e)))));
    cout<<m<<" is the smallest"<<endl;
    return 0;
}

