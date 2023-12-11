#include <iostream>
#include <cctype>

using namespace std;

int main() 
{
  char ch;

  cout << "Enter a character: ";
  cin >> ch;

  if (!isalpha(ch)) 
  {
    cout << "Please enter an alphabet." << endl;
    return 1;
  }

  ch = tolower(ch);

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    cout << "The character '" << ch << "' is a vowel." << endl;
  } else {
    cout << "The character '" << ch << "' is a consonant." << endl;
  }

  return 0;
}