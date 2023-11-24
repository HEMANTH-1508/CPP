#include<iostream>
#include<string.h>
using namespace std;

class shape
{
    float height,width;
    public:
    void getdata();
    void display();
};

class rectangle : public shape
{
    float perimeter,area,height,width;
    public:
    void result();
};

class triangle : public shape
{
    float perimeter,area,height,width;
    public:
    void result();
};


void shape::getdata()
{
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
}

void shape::display()
{
    cout << "Height: " << height << endl;
    cout << "Width: " << width << endl;
}

void rectangle::result()
{
    perimeter = 2 * (height + width);
    area = height * width;

    cout << "Rectangle Area: " << area << endl;
    cout << "Rectangle Perimeter: " << perimeter << endl;
}