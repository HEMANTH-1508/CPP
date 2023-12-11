#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    a^=b;
    b^=a;
    a^=b;
    cout<<"\nAfter swapping the numbers:\na = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}

