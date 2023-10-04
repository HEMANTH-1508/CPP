#include<iostream>
using namespace std;
int main()
{
  int c,a[10],i,sum=0,avg;
  cout<<"Enter no of elements: ";
  cin>>c;
  cout<<"\nEnter elements: ";
  for(i=0;i<c;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  avg=sum/c;
  cout<<"\nAverage of an array: "<<avg;
}
