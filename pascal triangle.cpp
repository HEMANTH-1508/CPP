#include <iostream>

using namespace std;

int main() 
{
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;

  for (int i = 0; i < rows; ++i) 
  {
    for (int j = 0; j < rows - i; ++j) 
    {
      cout << " ";
    }
    int coefficient = 1;
    for (int k = 0; k <= i; ++k) 
    {
      cout << coefficient << " ";
      coefficient = coefficient * (i - k) / (k + 1);
    }

    cout << endl;
  }

  return 0;
}
