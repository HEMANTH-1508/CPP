#include<iostream>
#include<string>
using namespace std;

class student
{
  public:
  	string name,sex;
  	int roll,age,room;
  	student(string a,int b,string c,int d,int e)
    {
      name=a;
      roll=b;
      sex=c;
      age=d;
      room=e;
    }
};

int main()
{
  student st1("JAYA SANKAR",192210284,"M",18,401);
  student st2("HEMANTH",192210229,"M",19,401);
  student st3("THEJSWAR REDDY",192210297,"M",18,401);
  student st4("HARSHAVARDHAN KARTHEEK REDDY",192210042,"M",18,423);
  student st5("AKASH",192210440,"M",19,401);
  cout<<"\n\nSTUDENT 1: \n"<<st1.name<<"\n"<<st1.roll<<"\n"<<st1.sex<<"\n"<<st1.age<<"\n"<<st1.room<<"\n";
  cout<<"\n\nSTUDENT 2: \n"<<st2.name<<"\n"<<st2.roll<<"\n"<<st2.sex<<"\n"<<st2.age<<"\n"<<st2.room<<"\n";
  cout<<"\n\nSTUDENT 3: \n"<<st3.name<<"\n"<<st3.roll<<"\n"<<st3.sex<<"\n"<<st3.age<<"\n"<<st3.room<<"\n";
  cout<<"\n\nSTUDENT 4: \n"<<st4.name<<"\n"<<st4.roll<<"\n"<<st4.sex<<"\n"<<st4.age<<"\n"<<st4.room<<"\n";
  cout<<"\n\nSTUDENT 5: \n"<<st5.name<<"\n"<<st5.roll<<"\n"<<st5.sex<<"\n"<<st5.age<<"\n"<<st5.room<<"\n";
  return 0;
}
