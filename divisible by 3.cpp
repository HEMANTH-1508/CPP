#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter a number: ";
  cin>>a;
  bool c=(a%3==0)?true :false;
  if(c)
  {
    cout<<"\nDIVISIBLE";
  }
  else
  {
    cout<<"\nNOT DIVISIBLE";
  }
}
