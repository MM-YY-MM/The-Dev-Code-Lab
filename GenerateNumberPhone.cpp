#include <iostream>
#include "clsUtil.h"
using namespace std;

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

void FillArrayPhone(string arrPhone[],short Length, string PrefixNumEGP = "+2010")
{
    for (int i = 0; i < Length; i++)
    {
        if (i <= 50)
            arrPhone[i] = GenerateNumberPhone(PrefixNumEGP);
        else if (i <= 100)
        {
            PrefixNumEGP = "+2012";
            arrPhone[i] = GenerateNumberPhone(PrefixNumEGP);
        }
        else if (i <= 100)
        {
            PrefixNumEGP = "+2011";
            arrPhone[i] = GenerateNumberPhone(PrefixNumEGP);
        }
        else
        {
            PrefixNumEGP = "+2015";
            arrPhone[i] = GenerateNumberPhone(PrefixNumEGP);
        }
    }
}

void PrintArray(string arrPhone[])
{
    for (int i = 0; i < 300; i++)
    {
        cout << arrPhone[i] << endl;
    }
}

int main()
{
    clsUtil::Srand();
    string arrPhone[300];
    string PrefixNumEGP = "+2010";

    //Fill Array
    FillArrayPhone(arrPhone, 300, PrefixNumEGP);

    //Print
    PrintArray(arrPhone);

    //system("pause>0");
    return 0;
}
