#include<iostream>
using namespace std;
int main()
{
  int sum=0,n,i;
  cout<<"ENTER THE NUMBER : ";
  cin>>n;  
  for(i=1;i<n;i++)
  {
    if(n%i==0)
    {
      sum+=i;     
    }
  }
  if(sum>n)
    cout<<"\nABUNDANT NUMBER";
  else
    cout<<"\nNOT A ABUNDANT NUMBER";
  return 0;
}
