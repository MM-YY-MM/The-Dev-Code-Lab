#include <iostream>
#include <fstream>
using namespace std;

void CreateFile(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);
    if (MyFile.is_open())
    {
        MyFile << "" << endl;
        MyFile.close();
    }
}

int main()
{  
    CreateFile("LastSeries.txt");
    CreateFile("Categories.txt");
    CreateFile("Sales.txt");
    CreateFile("Invoices.txt");

    return 0;
}
