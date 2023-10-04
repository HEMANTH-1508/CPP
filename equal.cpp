#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter a number: ";
  cin>>a;
  cout<<"\nEnter a number: ";
  cin>>b;
  bool c=(a==b)?true :false;
  if(c)
  {
    cout<<"\nEQUAL";
  }
  else
  {
    cout<<"\nNOT EQUAL";
  }
}
