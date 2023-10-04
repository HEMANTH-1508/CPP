#include<iostream>
using namespace std;
int main()
{
  int a[100],i,b,j,e;
  cout<<"ENTER NUMBER OF ELEMENTS : ";
  cin>>b;
  for(i=0;i<b;i++)
  {
    cout<<"\nENTER ELEMENT : ";
    cin>>a[i];
  }
  cout<<"\nENTER THE POSITION TO INSERT : ";
  cin>>j;
  cout<<"\nENTER ELEMENT TO INSERT : ";
  cin>>e;
  for(i=b+1;i>j-1;i--)
  {
    a[i]=a[i-1];
  }
  a[j-1]=e;
  cout<<"\nAFTER ISERTION : ";
  for(i=0;i<b+1;i++)
  {
    cout<<"\t"<<a[i];
  }
}
