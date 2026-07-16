#include <iostream>

using namespace std;

int main()
{
int i,x,n;
bool flag;
cin>>n;
for(x=2;x<=n;x++)
{
    flag=true;

    for(i=2;i<x;i++)
        if(x%i==0 && x!=2)
    {
        flag=false;
        break;
    }
 if(flag==true)
    cout<<x<<"\t";
}
    return 0;
}
