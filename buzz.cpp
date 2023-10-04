#include<iostream>
using namespace std;
int main()
{
  int a,rem=0,n;
  cout<<"ENTER A NUMBER : ";
  cin>>a;
  n=a;
  rem=n%10;
  if(a%7==0 || rem==7)
  {
    cout<<"\nIT IS A BUZZ NUMBER ";
  }
  else
  {
    cout<<"\nIT IS A NOT BUZZ NUMBER ";
  }
}
