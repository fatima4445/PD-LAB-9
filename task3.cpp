#include<iostream>
#include<string>
using namespace std;
bool same(string num[],int size);
main()
{
    string num[100];
    int size;
  cout<<"Enter the size of array:";
  cin>>size;
  for(int a=0;a<size;a++)
  {
    cout<<"Enter the elemnts of array:";
    cin>>num[a];
  }
  int res=same(num,size);
  if(res)
  cout<<"true";
  else
  cout<<"False";
}
bool same(string num[],int size)
{
 for(int i=0;i<size;i++)
 {
   if(num[i]!=num[0])
   return false;

 }
 return true;
}