#include<iostream>
#include<string.h>
using namespace std;

class vehicle
{
    char make[100];
    char model[100];
    int year;
    public:
    void get_details()
    {
        cout<<"Enter the details of a Vehicle\n";
        cout<<"Make : ";cin>>make;
        cout<<"Model : ";cin>>model;
        cout<<"Year : ";cin>>year;
    }
};

class car : public vehicle
{
    int seating;
    char fueltype[100];
    public:
    void get_car_details()
    {
        vehicle::get_details();
        cout<<"\nCar Details:\n";
        cout<<"Seats : ";cin>>seating;
        cout<<"Fuel Type : ";cin>>fueltype;
    }
};

class truck : public vehicle
{
    int payloadcap,towcap;
    public:
    void get_truck_details()
    {
        vehicle::get_details();
        cout<<"\nTruck Details\n";
        cout<<"Payload capacity : ";cin>>payloadcap;
        cout<<"Towing Capacity : ";cin>>towcap;
    }
};


int main()
{
    car c1;
    c1.get_car_details();

    truck t1;
    t1.get_truck_details();
}