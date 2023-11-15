#include<iostream>
#include<vector>
using namespace std;
main()
{
  int size;
  string color[6] ;
  cout<<"Enter the size of  array:";
  cin>> size;
  for(int i=0;i<size;i++)
  {
    cout<<"Enter the elements of array:";
    cin>>color[i];
  }
 int s=1, colour=2,tot=0,n;
 n=sizeof(colour);
 for(int i=0;i<n;i++)
 {
   if(i>0)
   tot=tot+s;
   tot=tot+colour;

 }
cout<<"Time to colour:"<<tot;
}