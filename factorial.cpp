#include<iostream>
using namespace std;
int main()
{
  int i,f=1,a;
  cout<<"ENTER THE NUMBER : ";
  cin>>a;
  for(i=1;i<=a;i++)
  {
    f=f*i;
  }
  cout<<"\nFACTORIAL OF GIVEN NUMBER IS :"<<f;
}
