void SaveVectorToFile(string FillName, vector <string> vFileContent)
{
    fstream MyFile;
    MyFile.open(FillName, ios::out); // Write Mode

    if (MyFile.is_open())
    {
        for (string &Line : vFileContent)
        {
            if (Line != "") // Ignore blank lines
            {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}
