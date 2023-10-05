#include<iostream>
#include<string>
using namespace std;

int main()
{
  string a,c;
  cout<<"ENTER A STRING : ";
  cin>>a;
  int b=a.length();
  cout<<"\nREVERSED STRING IS : \n";
  for(int i=b;i>=0;i--)
  {
    cout<<a[i];
  }
  
}
