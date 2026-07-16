#include <iostream>

using namespace std;

int main()
{
    int x;

    cout<<"enter your number";;
    cin>>x;
   switch(x)
{
case 1:
    cout<<"saterday";
    break;
case 2:
    cout<<"sunday";
    break;
case 3:
    cout<<"monday";
    break;
case 4:
    cout<<"tuesday";
case 5:
    cout<<"wednesday";
    break;
case 6:
    cout<<"thursday";
    break;
case 7:
    cout<<"friday";
    break;

default:
    cout<<"error";}
    return 0;
}
