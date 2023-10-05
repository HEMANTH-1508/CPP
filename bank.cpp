#include<iostream>
#include<string>
using namespace std;

class bank
{
  public:
  	int AccNo,IFSCcode;
  	string name,branch;
  	bank(int a,int i,string n,string b)
    {
      AccNo=a;
      IFSCcode=i;
      name=n;
      branch=b;
    }
};

int main()
{
  bank b1(24905423,517501,"JAYA SANKAR","TIRUPATI");
  bank b2(28905410,530046,"HEMANTH","VIZAG");
  bank b3(25861734,517503,"THEJESWAR","CHENNAI");
  cout<<"\nCUSTOMER 1: \n"<<b1.name<<"\n"<<b1.AccNo<<"\n"<<b1.IFSCcode<<"\n"<<b1.branch<<"\n";
  cout<<"\nCUSTOMER 2: \n"<<b2.name<<"\n"<<b2.AccNo<<"\n"<<b2.IFSCcode<<"\n"<<b2.branch<<"\n";
  cout<<"\nCUSTOMER 3: \n"<<b3.name<<"\n"<<b3.AccNo<<"\n"<<b3.IFSCcode<<"\n"<<b3.branch<<"\n";
}
