#include<iostream>
using namespace std;
int main()
{
  int a[100],sum=0,b,i;
  cout<<"ENTER NUMBER OF ELEMENTS : ";
  cin>>b;
  for(i=0;i<b;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<b;i++)
  {
    sum+=a[i];
  }
  cout<<"\nSUM OF ELEMENTS IS:"<<sum;
}
