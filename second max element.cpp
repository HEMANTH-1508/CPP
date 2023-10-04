#include<iostream>
using namespace std;
int main()
{
  int a[100],i,b,j,temp,max;
  cout<<"ENTER NUMBER OF ELEMENTS : ";
  cin>>b;
  for(i=0;i<b;i++)
  {
    cout<<"\nENTER ELEMENT : ";
    cin>>a[i];
  }
  for(i=0;i<b;i++)
  {
    for(j=0;j<b;j++)
    {
      if(a[i]<a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  cout<<"\nSORTED ARRAY : ";
  for(i=0;i<b;i++)
  {
    cout<<"\t"<<a[i];
  }
  max=a[b-2];
  cout<<"\nSECOND LARGEST ELEMENT IS : "<<max;
}
