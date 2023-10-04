#include<iostream>
using namespace std;
int main()
{
  int a,sqr,n,sum=0,rem=0;
  cout<<"ENTER A NUMBER : ";
  cin>>a;
  sqr=a*a;
  n=sqr;
  while(n!=0)
  {
    rem=n%10;
    sum+=rem;
    n=n/10;
  }
  if(sum==a)
  {
    cout<<"\nIT IS A NEON NUMBER ";
  }
  else
  {
    cout<<"\nIT IS NOT A NEON NUMBER ";
  }
}
