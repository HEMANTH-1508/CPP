#include<iostream>
#include<string>
using namespace std;

class Car 
{       
  public:         
    string brand;  
    string model;  
    int year;      
    Car(string x, string y, int z) 
    { 
      brand = x;
      model = y;
      year = z;
    }
};

int main() 
{
  Car car1("BMW", "X5", 1999);
  Car car2("Ford", "Mustang", 1969);
  Car car3("Ferari", "Mustang", 1980);
  Car car4("Audi", "A3 Carbolite", 1972);
  cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
  cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
  cout << car3.brand << " " << car3.model << " " << car3.year << "\n";
  cout << car4.brand << " " << car4.model << " " << car4.year << "\n";
  return 0;
}
