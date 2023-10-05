#include<iostream>
using namespace std;
int main()
{
  int a[100],i,b,j,temp,max,min;
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
  max=a[b-1];
  cout<<"\nLARGEST ELEMENT IS : "<<max;
  min=a[0];
  cout<<"\nSMALLEST ELEMENT IS : "<<min;
}
