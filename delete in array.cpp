#include<iostream>
using namespace std;
int main()
{
  int a[100],i,b,j;
  cout<<"ENTER NUMBER OF ELEMENTS : ";
  cin>>b;
  for(i=0;i<b;i++)
  {
    cout<<"\nENTER ELEMENT : ";
    cin>>a[i];
  }
  cout<<"\nENTER THE POSITION TO DELETE : ";
  cin>>j;
  for(i=j-1;i<b;i++)
  {
    a[i]=a[i+1];
  }
  cout<<"\nAFTER DELETION : ";
  for(i=0;i<b-1;i++)
  {
    cout<<"\t"<<a[i];
  }
}
