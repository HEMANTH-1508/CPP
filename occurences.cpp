#include<iostream>
using namespace std;
int main()
{
  int a[100],i,b,c,d=0;
  cout<<"ENTER NUMBER OF ELEMENTS : ";
  cin>>b;
  for(i=0;i<b;i++)
  {
    cout<<"\nENTER ELEMENT : ";
    cin>>a[i];
  }
  cout<<"\nENTER THE ELEMNT NEED TO FIND : ";
  cin>>c;
  for(i=0;i<b;i++)
  {
    if(c==a[i])
    {
      d+=1;
    }
  }
  cout<<"\nNUMBE OF OCCURENCES FOR THE VALUE "<<c<<" is "<<d;
}
