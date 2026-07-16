#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[2];
    float grade[5];
    float sum,avg;

    for(int i=0;i<2;i++)
    {
    cout<<"student name:";
    cin>>name[i];

    sum=0;

    for(int x=0;x<5;x++)
    {
    cout<<"score"<<x+1<<":";
    cin>>grade[x];
    sum+=grade[x];
    }
    avg=sum/5;

    cout<<"miangin:";
    cout<<name[i];
    cout<<"="<<avg<<endl;
    }


    return 0;
}
