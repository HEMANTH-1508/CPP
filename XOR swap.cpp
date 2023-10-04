#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"ENTER TWO NUMBERS : ";
  cin>>a>>b;
  cout<<"\nBEFORE SWAPPING A:"<<a<<" B :"<<b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"\nAFTER SWAPPING A:"<<a<<" B :"<<b;  
}
