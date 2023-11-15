#include<iostream>
#include <string>
using namespace std;
void  convert(string pin);
main()
{
 string  pin;
 cout<<"Enter your PIN(4-digits):";
 cin>>pin;
 convert(pin);
}
void convert(string  pin)
{
    string n1;
    string Moves[11]={"Shimmy","Shake","Pirouette","Slide","Box step","Headspin","Dosado","Pop","lock","Arabesque"};
   int n=pin.size();  
  if(pin.size()!=4)
    cout<<"invalid input!";

  for(int i=0;i<4;i++)
  { 
     cout<< Moves[(((int)pin [i]-48) ) +i % 10]<<"  " ;
  }
 
}
