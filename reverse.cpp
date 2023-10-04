#include<iostream>
using namespace std;
int main()
{
  int a,n,rem,rev=0;
  cout<<"ENTER THE NUMBER :";
  cin>>a;
  n=a;
  while(n!=0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
  }
  cout<<"\nREVERSED NUMBER IS : "<<rev;
}
