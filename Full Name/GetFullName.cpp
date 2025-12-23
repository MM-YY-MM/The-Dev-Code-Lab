#include <iostream>
#include <string>

using namespace std;

enum enReversedFullName { arReversed = 1, enReversed = 2 };

struct stInfo
{
	string FirstName;
	string MiddleName;
	string LastName;
};

void PrintMenueReversed()
{
	cout << "\n***********[Reversed Full Name]***********\n\n";
	cout << " (1) Arabic Reversed Full Name.\n";
	cout << " (2) United States & Europe Reversed Full Name.\n\n";
	cout << "******************************************\n\n";
}

enReversedFullName ReadReversedFullName(string Message)
{
	enReversedFullName ReversedFullName = enReversedFullName::arReversed;
	
	cout << Message;
	short c;
	cin >> c;
	ReversedFullName = enReversedFullName(c);
  
	return ReversedFullName;
}

stInfo ReadInfo()
{
	stInfo Name;

	cout << "\n Please Enter Your First Name?\n ";
	cin >> Name.FirstName;

	cout << "\n Please Enter Your Middle Name?\n ";
	cin >> Name.MiddleName;

	cout << "\n Please Enter Your Last Name?\n ";
	cin >> Name.LastName;

	return Name;
}

string GetFullName(stInfo Info, enReversedFullName ReversedFullName)
{
	string FullName = "";

	if (ReversedFullName == enReversedFullName::arReversed)
		FullName = Info.FirstName + " " + Info.MiddleName + " " + Info.LastName;
	else
		FullName = Info.LastName + ", " + Info.FirstName + " " + Info.MiddleName;

	return FullName;
}

void PrintFullName(string FullName, enReversedFullName ReversedFullName)
{
	if (ReversedFullName == enReversedFullName::arReversed)
	{
		cout << "\n The Full Name Arabic. \n ";
		cout << "\n\t Your Full Name is : " << FullName << endl << endl;
	}
	else
	{
		cout << "\n The Full Name United States & Europe. \n ";
		cout << "\n\t Your Full Name is : " << FullName << endl << endl;
	}
}

int main()
{

	PrintMenueReversed();

	enReversedFullName ReversedFullName = ReadReversedFullName("Your Choice : ");
	stInfo Info = ReadInfo();

	PrintFullName(GetFullName(Info, ReversedFullName), ReversedFullName);

	return 0;

} 
