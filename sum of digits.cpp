#include <iostream>
using namespace std;

int main() 
{
    int number, originalNumber, sum = 0;
    cout << "Enter an integer: ";
    cin >> number;
    originalNumber = number; 
    while (number != 0) {
        int digit = number % 10;  
        sum += digit;  
        number /= 10; 
    }
    cout << "The sum of digits in " << originalNumber << " is: " << sum << endl;
    return 0;
}
