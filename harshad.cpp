#include<iostream>
using namespace std;
int main()
{
  int a,n,rem,rev=0,x,d=0;
  cout<<"ENTER THE NUMBER :";
  cin>>a;
  n=a;
  while(n!=0)
  {
    rem=n%10;
    rev+=rem;
    n=n/10;
  }
  if(a%rev==0)
  {
    cout<<"\nHARSHAD NUMBER";
  }
  else
  {
    cout<<"\nNOT A HARSHAD NUMBER";
  }
}
