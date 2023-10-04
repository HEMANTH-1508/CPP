#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num,y,x,rem,n=0,result=0,power;
  cout<<"ENTER INTEGER : ";
  cin>>num;
  x=num;
  while(x!=0) 
  {
    x/=10;
    ++n;
  }
  y=num;
  while(y!=0) 
  {
    rem=y%10;
    power=round(pow(rem, n));
    result+=power;
    y/=10;
  }
  if(result==num)
  {
    cout<<"\nGIVEN NUMBER IS A NARCISSISTIC NUMBER ";
  }
  else
  {
    cout<<"\nGIVEN NUMBER IS NOT A NARCISSISTIC NUMBER ";
  }
}
