#include<iostream>
#include<string>
using namespace std;

class book
{
  public:
  	string name;
  	int price,number;
  	book(string a,int b,int c)
    {
      name=a;
      price=b;
      number=c;
    }
};

int main()
{
  book b1("ADVENTURE OF TOM SAWYER",2499,1);
  book b2("PANCHATANTRAM",1999,2);
  book b3("RAMAYANAM",8999,3);
  book b4("MAHABHARATHAM",17999,4);
  book b5("DEATH NOTE",4499,5);
  cout<<"BOOK 1: \n"<<b1.name<<"\n"<<b1.price<<"\n"<<b1.number<<"\n";
  cout<<"\n\nBOOK 2: \n"<<b2.name<<"\n"<<b2.price<<"\n"<<b2.number<<"\n";
  cout<<"\n\nBOOK 3: \n"<<b3.name<<"\n"<<b3.price<<"\n"<<b3.number<<"\n";
  cout<<"\n\nBOOK 4: \n"<<b4.name<<"\n"<<b4.price<<"\n"<<b4.number<<"\n";
  cout<<"\n\nBOOK 5: \n"<<b5.name<<"\n"<<b5.price<<"\n"<<b5.number<<"\n";
  return 0;
}
