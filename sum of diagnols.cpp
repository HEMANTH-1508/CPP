#include<iostream>
using namespace std;
int main()
{
  int a[3][3],i,j,sum=0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<"\nENTER ELEMENT : ";
      cin>>a[i][j];
    }
  }
  cout<<"\nMATRIX IS :";
  for(i=0;i<3;i++)
  {
    cout<<"\n";
    for(j=0;j<3;j++)
    {
      cout<<"\t"<<a[i][j];
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
      {
        sum+=a[i][j];
      }
    }
  }
  cout<<"\nSUM OF DIAGNOL IS : "<<sum;
}
