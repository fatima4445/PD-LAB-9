#include<iostream>
#include<string>
using namespace std;
string containseven(int num[],int size);
main()
{
  int num[100],size;
  cout<<"Enter the size of array:";
  cin>>size;
  for(int a=0;a<size;a++)
  {
    cout<<"Enter the elemnts of array:";
    cin>>num[a];
  }
  cout<<containseven(num,size);
}
string  containseven(int num[],int size)
{
  for(int i=0;i<size;i++)
  {
    if(num[i]==7)
     return" Boom!";

  }
     return "There is no seven in array!";
  
}