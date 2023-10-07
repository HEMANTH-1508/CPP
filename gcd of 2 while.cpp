#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    while (num2 != 0) 
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << num1 << endl;
    return 0;
}
