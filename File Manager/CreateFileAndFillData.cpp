#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string ReadDetails()
{
    string S;
    cout << "Enter The Details ..\\n";
    getline(cin >> ws, S);
    cout << "\\n";
    return S;
}

void CreateFileAndFillData(string FillName)
{
  //The data is filled in once, not every time as a loop. I got to this point and couldn't find anything better to help.
	//Other data can be filled in if the program is run each time.
	
    fstream MyFile;
    MyFile.open(FillName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << ReadDetails();
        MyFile.close();
    }
}

void PrintContentFile(string FillName)
{
    fstream MyFile;
    MyFile.open(FillName, ios::in); // Read Mode

    if (MyFile.is_open())
    {
        string Line = "";

        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

int main() 
{
    CreateFileAndFillData("MyFile50.txt");

    char Print = 'y';
    cout << "Do you want to print the contents of the file? [Y\\\\N]\\n";
    cin >> Print;

    if (Print == 'y'|| Print == 'Y')
        PrintContentFile("MyFile50.txt");

    return 0;
}
