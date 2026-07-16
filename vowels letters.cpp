#include <iostream>
#include <string>
using namespace std;

int main()
{
string word;

cout<<"enter a word:";
cin>>word;

cout<<"vowels:";

for(int i=0;i<word.length();i++)
{
  if(word[i]=='a'|| word[i]=='e'|| word[i]=='u'|| word[i]=='o'|| word[i]=='i')
  {
  cout<<word[i]<<" ";
  }
}


    return 0;
}
