#include<iostream>
#include<string>
using namespace std;

class rectangle
{
  public:
  	int length,breadth;
  	rectangle(int l,int b)
  	{
      length=l;
      breadth=b; 
  	}
};

int main()
{
  rectangle r1(10,20);
  rectangle r2(20,30);
  rectangle r3(60,90);
  rectangle r4(50,60);
  rectangle r5(70,80);
  cout<<"RECTANGLE 1: \nBREADTH :"<<r1.breadth<<"\tLENGTH : "<<r1.length<<"\n";
  cout<<"\nRECTANGLE 2: \nBREADTH :"<<r2.breadth<<"\tLENGTH : "<<r2.length<<"\n";
  cout<<"\nRECTANGLE 3: \nBREADTH :"<<r3.breadth<<"\tLENGTH : "<<r3.length<<"\n";
  cout<<"\nRECTANGLE 4: \nBREADTH :"<<r4.breadth<<"\tLENGTH : "<<r4.length<<"\n";
  cout<<"\nRECTANGLE 5: \nBREADTH :"<<r5.breadth<<"\tLENGTH : "<<r5.length<<"\n";
  return 0;
}
