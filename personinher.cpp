#include<iostream>
#include<string.h>
using namespace std;

class person
{
    char name[100];
    int age;
    char gender[7];
    public:
    void getdata();
    void display();
};

class student :public person
{
    int roll;
    int cls;
    public:
    void getdata1();
    void display();
};

class teacher :public person
{
    char sub[50];
    int salary;
    public:
    void getdata2();
    void display();
};

void person::getdata()
{
    cout<<"Enter the name of the person:"<<endl;
    cin>>name;
    cout<<"Enter the age of the person:"<<endl;
    cin>>age;
     cout<<"Enter the gender of the person:"<<endl;
    cin>>gender;
}

void person::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
}

void student::getdata1()
{
    cout<<"Enter the roll number:"<<endl;
    cin>>roll;
    cout<<"Enter the classroom number of student:"<<endl;
    cin>>cls;
}

void student::display()
{
    person::display(); 
    cout << "Roll Number: " << roll << endl;
    cout << "Class: " << cls << endl;
}

void teacher::getdata2()
{
    cout<<"Enter the subject of teacher:"<<endl;
    cin>>sub;
    cout<<"Enter the salary of teacher:"<<endl;
    cin>>salary;
}

void teacher::display()
{
    person::display();
    cout << "Subject: " << sub << endl;
    cout << "Salary: $" << salary << endl;
}

int main()
{
    student s1;
    s1.getdata();
    s1.getdata1();

    student s2;
    s2.getdata();
    s2.getdata1();

    teacher t1;
    t1.getdata();
    t1.getdata2();

    teacher t2;
    t2.getdata();
    t1.getdata2();

    s1.display();
    s2.display();
    t1.display();
    t2.display();
}