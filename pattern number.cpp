#include<iostream>
using namespace std;
int main()
{
  int i,j,a;
  cout<<"ENTER THE NUMBER : ";
  cin>>a;
  for(i=0;i<=a;i++)
  {
    for(j=0;j<i;j++)
    {
      cout<<" "<<i;
    }
    cout<<"\n";
  }
}
