#include<iostream>
using namespace std;
int main()
{
  int f=0,n=1,a,next,i;
  cout<<"ENTER NUMBER OF TERMS : ";
  cin>>a;
  cout<<"\nFIBONACCI SERIES : ";
  for(i=0;i<a;i++)
  {
    if(i<=1)
    {
      next=i;
    }
    else
    {
      next=f+n;
      f=n;
      n=next;
    }
    cout<<"\t"<<next;
  }
}
