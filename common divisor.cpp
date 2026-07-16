#include <iostream>

using namespace std;

int main()
{
int x,y,min;

cout<<"enter first number:";
cin>>x;

cout<<"enter second number:";
cin>>y;

if(x<y)
    min=x;
else
    min=y;

cout<<"common divisor:";

for(int i=1;i<=min;i++)
{
    if(x%i==0 && y%i==0)
{
cout<<i<<" ";
}
}
    return 0;
}
