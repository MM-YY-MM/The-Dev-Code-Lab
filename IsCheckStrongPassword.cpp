#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string ReadPassword()
{
    string Password = "";
    cout << "\nEnter Password: ";
    getline(cin >> ws, Password);
    return Password;
}

bool IsCheckCapitalLetter(string &Password)
{
    for (char c : Password)
        if (isupper(c)) 
          return true;
    return false;
}

bool IsCheckSmallLetter(string &Password)
{
    for (char c : Password)
        if (islower(c)) 
          return true;
    return false;
}

bool IsCheckDigit(string &Password)
{
    for (char c : Password)
        if (isdigit(c)) 
          return true;
    return false;
}

bool IsCheckPunctuationCharacters(string &Password)
{
    for (char c : Password)
        if (ispunct(c)) 
          return true;
    return false;
}

bool IsCheckStrongPassword(string& Password)
{
    return IsCheckCapitalLetter(Password) &&
           IsCheckSmallLetter(Password) &&
           IsCheckDigit(Password) &&
           IsCheckPunctuationCharacters(Password);
}

int main()
{

  string Password = ReadPassword();

  if (IsCheckStrongPassword(Password))
      cout << "This Password is strong.\\n";
  else
      cout << "This Password is weak.\\n";

  return 0;
}
