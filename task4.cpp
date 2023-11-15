#include<iostream>
#include<string>
using namespace std;
void transform(int num[],int size ,int trans);
main()
{
    int num[100];
    int size,trans;
  cout<<"Enter the size of array:";
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cout<<"Enter the elements of array:";
    cin>>num[i];
  }
  cout<<"Enter the number of transitions:";
  cin>>trans;
  transform(num,size,trans);
  for(int i=0;i<size;i++)
   cout<<num[i];
}
void transform(int num[],int size ,int trans)
{
  for(int j=0;j< trans;j++)
  {
    for(int a=0;a<size;a++ )
    {
        if(num[a] % 2==0)
        {
            cout<<" ";
            num[a] -= 2;
         cout<<" ";
        }
        else
        {
            cout<<" ";
            num[a] +=2;
        cout<<" ";
        }
    }
  }

}