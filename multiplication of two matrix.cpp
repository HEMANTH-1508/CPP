#include<iostream>
using namespace std;
int main()
{
  int a[3][3],b[3][3],i,j,k,c[3][3];
  cout<<"\nMATRIX 1 :";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<"\nENTER ELEMENT : ";
      cin>>a[i][j];
    }
  }
  cout<<"\nMATRIX 2 :";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<"\nENTER ELEMENT : ";
      cin>>b[i][j];
    }
  }
  cout<<"\nMATRIX 1 IS :";
  for(i=0;i<3;i++)
  {
    cout<<"\n";
    for(j=0;j<3;j++)
    {
      cout<<"\t"<<a[i][j];
    }
  }
  cout<<"\nMATRIX 2 IS :";
  for(i=0;i<3;i++)
  {
    cout<<"\n";
    for(j=0;j<3;j++)
    {
      cout<<"\t"<<b[i][j];
    }
  }
  cout<<"\nMULTIPLICATION OF TWO MATRIX IS : ";
  for(i=0;i<3;i++)    
    {    
       for(j=0;j<3;j++)    
       {    
          c[i][j]=0;    
          for(k=0;k<3;k++)    
          {    
             c[i][j]=c[i][j]+a[i][k]*b[k][j];    
          }    
       }    
  }
  for(i=0;i<3;i++)
  {
    cout<<"\n";
    for(j=0;j<3;j++)
    {
      cout<<"\t"<<c[i][j];
    }
  }
}
