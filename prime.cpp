#include<iostream>
using namespace std;
int main()
{
  int a,i,n,flag=0;
  cout<<"ENTER A NUMBERS : ";
  cin>>a;
  n=a/2;
  for(i=2;i<=n;i++)
  {
    if(a%i==0)
    {
      flag=1;
      cout<<"\nGIVEN NUMBER IS NOT PRIME";
      break;
    }
  }
  if(flag==0)
  {
    cout<<"\nGIVEN NUMBER IS PRIME";
  }
}
