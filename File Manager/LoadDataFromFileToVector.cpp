#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void LoadDataFromFileToVector(string FillName, vector <string> &vFileContent)
{
    fstream MyFile;
    MyFile.open(FillName, ios::in); // Read Mode
    if (MyFile.is_open())
    {
        string Line = "";
        while (getline(MyFile, Line))
        {
            // Each line read is added to the Vector.
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

int main() 
{
    vector <string> vFileContent;
    LoadDataFromFileToVector("MyFile50.txt", vFileContent);
    
    // Print Vector content
    for (const string & Line : vFileContent)
    {
        cout << Line << endl;
    }

    return 0;
}
