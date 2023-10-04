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
  if(sum==n)
    cout<<"\nPERFECT NUMBER";
  else
    cout<<"\nNOT A PERFECT NUMBER";
  return 0;
}
