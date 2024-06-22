#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
using namespace std;
vector<float>reading1;
vector<float>reading2;
vector<float>reading3;
class readings
{
public:
    float temperature,humidity,air_quality;
    readings();
    void data_temp();
    void data_humi();
    void data_air();
};
readings::readings()
{
    cout<<"environment management system loading...."<<endl;
    cout<<"hello user!!"<<endl;
}
void readings::data_temp()
{
    float sum1=0,sum11=0;
    float max1=reading1[0];
    float min1=reading1[0];
    for(int i=0;i<reading1.size();i++)
    {
        sum1+=reading1[i];
    }
    float avg1=sum1/reading1.size();
    cout <<"average temperature: "<<avg1<<" degree celcius"<<endl;
    for(int i=0;i<reading1.size();i++)
    {
        sum11+=(reading1[i]-avg1)*(reading1[i]-avg1);
    }
    float dev1=sqrt(sum11/6);
    cout<<"standard deviation: "<<dev1<<endl;
}
void readings::data_air()
{
    float sum3=0,sum33=0;
    float max3=reading3[0];
    float min3=reading3[0];
    for(int i=0;i<reading3.size();i++)
    {
        sum3+=reading3[i];
    }
    float avg3=sum3/reading3.size();
    cout <<"average temperature: "<<avg3<<" degree celcius"<<endl;
    for(int i=0;i<reading1.size();i++)
    {
        sum33+=(reading3[i]-avg3)*(reading3[i]-avg3);
    }
    float dev3=sqrt(sum33/6);
    cout<<"standard deviation: "<<dev3<<endl;
}
void readings::data_humi()
{
    float sum2=0,sum22=0;
    float max1=reading1[0];
    float min1=reading1[0];
    for(int i=0;i<reading2.size();i++)
    {
        sum2+=reading2[i];
    }
    float avg2=sum2/reading2.size();
    cout <<"average temperature: "<<avg2<<" degree celcius"<<endl;
    for(int i=0;i<reading2.size();i++)
    {
        sum22+=(reading2[i]-avg2)*(reading2[i]-avg2);
    }
    float dev2=sqrt(sum22/6);
    cout<<"standard deviation: "<<dev2<<endl;
}
int main()
{
    int n;
    readings data;
    cout<<"1.temperature"<<endl;
    cout<<"2.humidity"<<endl;
    cout<<"3.air quality"<<endl;
    cout<<"enter what data do you want to see"<<endl;
    crack:
    cout<<"(enter '1' for temperature, '2' for humidity, '3' for air quality,)"<<endl;
    input:
    cin>>n;
    if(n==1)
    {
    ifstream file1("temperature.txt");
    if(!file1.is_open())
    {
        cout<<"unable to open the file"<<endl;
    }
    while(file1>>data.temperature)
    {
        reading1.push_back(data.temperature);
    }
    file1.close();
    data.data_temp();
    }if(n==2)
    {
        ifstream file2("humidity.txt");
    if(!file2.is_open())
    {
        cout<<"unable to open the file"<<endl;
    }
    while(file2>>data.humidity)
    {
        reading2.push_back(data.humidity);
    }
    file2.close();
    data.data_humi();
    }if(n==3)
    {
    ifstream file3("air_quality.txt");
    if(!file3.is_open())
    {
        cout<<"unable to open the file"<<endl;
    }
    while(file3>>data.air_quality)
    {
        reading3.push_back(data.air_quality);
    }
    file3.close();
    data.data_air();
    }
    if(n!=1 && n!=2 && n!=3)
    {
        cout<<"invalid entry!! enter again!!";
        goto input;
    }
    cout<<"want to display more data? 1 for yes 0 for no: ";
    int m;
    cin>>m;
    if(m==1)
    {
        goto crack;
    }
    return 0;
}

