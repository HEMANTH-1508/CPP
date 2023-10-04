#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"ENTER THREE NUMBERS : ";
  cin>>a>>b>>c;
  if(a>b && a>c)
  {
    cout<<"\n"<<a<<" IS GREATER THAN ALL";
  }
  else if(b>c)
  {
    cout<<"\n"<<b<<" IS GREATER THAN ALL";
  }
  else
  {
    cout<<"\n"<<c<<" IS GREATER THAN ALL";
  }
}
