#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int comman(string n1,string n2);
main()
{
  string n1,n2;
  cout<<"Enter the first string:";
  cin>>n1;
  cout<<"Enter the second string:";
  cin>>n2;
  cout<<comman(n1,n2);
}
int comman(string n1,string n2)
{
  
  char ch;
  char n[ch];
  for( char ch:n1)
   n[ch]++;
  int comman=0;
  for( char ch : n2)
  {
    if(n[ch]>0)
    {
        comman++;
        n[ch]--;

    }
  }
  return comman;

}