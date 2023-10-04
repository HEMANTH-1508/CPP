#include<iostream>
using namespace std;
int main()
{
  int sum=0,n,f,a,rem=0,i;
  cout<<"ENTER THE NUMBER : ";
  cin>>a;
  n=a;
  while(n!=0)
  {
    rem=n%10;
    f=1;
    for(i=1;i<=rem;i++)
  	{
      f=f*i;
    }
    n=n/10;
    sum+=f;
  }
  if(sum==a)
  {
    cout<<"\nIT IS A STRONG NUMBER ";
  }
  else
  {
    cout<<"\nIT IS NOT A STRONG NUMBER ";
  }
}
