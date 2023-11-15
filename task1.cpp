#include<iostream>
#include<string>
using namespace std;
bool lenght(string word);
main()
{
  string word;
  cout<<"Enter any string:";
  cin>>word;
  if(lenght(word)==1)
   cout<<"true";
  else 
   cout<<"false"; 

}
bool lenght(string word)
{
    return word.size()%2==0;
    

}