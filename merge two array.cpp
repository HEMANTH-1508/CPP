#include<iostream>
using namespace std;
int main()
{
  int a[10],b[10];
  int m,n,i,j;
  cout<<"Enter no of terms: ";
  cin>>m;
  cout<<"\nEnter numbers: ";
  for(i=0;i<m;i++)
  {
    cin>>a[i];
  }
  cout<<"\nEnter no of terms: ";
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>b[i];
  }
  int c[m+n];
  for(i=0;i<m;i++)
  {
    c[i]=a[i];
  }
  for(i=m;i<m+n;i++)
  {
    c[i]=b[i-m];
  }
  cout<<"\nMERGED ARRAY IS : ";
  for(i=0;i<m+n;i++)
  {
    cout<<"\t"<<c[i];
  }
}
