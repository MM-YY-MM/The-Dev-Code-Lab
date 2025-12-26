#include <iostream>
#include "clsUtil.h"
using namespace std;

string GetRandomlyPrefixNumPhoneEgy(short RandomPrefix)
{
    string arrPrefix[4] = {"+2010","+2011","+2012","+2015"};
    return arrPrefix[RandomPrefix - 1];
}

//It may be specific to each country, but its format is useful for generating Egyptian numbers.
static string GenerateNumberPhone(string Pre_Phone = "+2010", short Length = 8)
{
    //Take it easy, just as you wish, but these are examples.
    // Ex: +2010, +201000,+20100, +20111, +2011, +20122, +2012, +20155, +2015, +201111, +201555, +201555, +20101 ...etc.
    string Phone = Pre_Phone;
    for (int i = 1; i <= Length; i++)
    {
        Phone += to_string(clsUtil::RandomNumber(0, 9));
    }
    return Phone;
}

vector <string> GetPhoneNumberGenerateEgy(short Length)
{
    vector <string> vNumPhone;
    for (int i = 0; i < Length; i++)
    {
        vNumPhone.push_back(GenerateNumberPhone(GetRandomlyPrefixNumPhoneEgy(clsUtil::RandomNumber(1, 4)), 8));
    }
    return vNumPhone;
}

void PrintVector(vector <string> vNumPhone)
{
    vector <string> ::iterator iter;
    for (iter = vNumPhone.begin(); iter != vNumPhone.end(); ++iter)
    {
        cout << *iter << "\n";
    }
}

int main()
{
    clsUtil::Srand();
    vector <string> vNumPhone = GetPhoneNumberGenerateEgy(1000);
    PrintVector(vNumPhone);
    
    //system("pause>0");
    return 0;
}
