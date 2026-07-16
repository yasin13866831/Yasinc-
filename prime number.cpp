#include <iostream>

using namespace std;

int main()
{
int x;
bool flag=true;
cout<<"enter your number";
cin>>x;
for(int i=2;i<x;i++)
    if(x%i==0)
{
    flag=false;
    break;
}
if(flag==true)
    cout<<"number is prime";
else
    cout<<"number not prime";
    return 0;
}
