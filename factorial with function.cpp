#include<iostream>
using namespace std;
int fact(int n)
{
  if(n==0 || n==1)
  {
    return 1;
  }
  else
  {
    return n*fact(n-1);
  }
}
int main()
{
  int a;
  cout<<"ENTER NUMBER : ";
  cin>>a;
  cout<<"\nFACTORIAL OF GIVEN NUMBER IS : "<<fact(a);
}
