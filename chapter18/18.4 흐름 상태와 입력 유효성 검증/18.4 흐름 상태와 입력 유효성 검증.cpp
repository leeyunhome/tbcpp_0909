// 18.4 흐름 상태와 입력 유효성 검증.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
#include <bitset>
using namespace std;

void printCharacterClassification(const int & i)
{
	cout << boolalpha;
	cout << "isalnum " << bool(std::isalnum(i)) << endl;
	cout << "isblank " << bool(std::isblank(i)) << endl;
	cout << "isdigit " << bool(std::isdigit(i)) << endl;
	cout << "islower " << bool(std::islower(i)) << endl;
	cout << "isupper " << bool(std::isupper(i)) << endl;
}

void printStates(const std::ios& stream) 
{
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;
	cout << "fail()=" << stream.fail() << endl;
	cout << "bad()=" << stream.bad() << endl;
}

void classifyCharacters(const string& str)
{
	//bool ok_flag = true;

	for (auto e : str)
	{
		cout << e << endl;
		std::cout << "isdigit " << std::isdigit(e) << endl;
		std::cout << "isblank " << std::isblank(e) << endl;
		std::cout << "isalpha " << std::isalpha(e) << endl;
	}
		//if (!std::isdigit(e))
		//{
		//	ok_flag = false;
		//	break;
		//}

	//return ok_flag;
}

int main()
{
	//while (true)
	//{
	//	char i;
	//	cin >> i;

	//	printStates(cin);

	//	//cout << i << endl;
	//	/*cout << boolalpha;
	//	cout << std::bitset<8>(cin.rdstate()) << endl;
	//	cout << std::bitset<8>(cin.istream::goodbit) << endl;
	//	cout << std::bitset<8>(cin.istream::failbit) << endl;
	//	cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;*/
	//	//cout << (cin.rdstate() == std::istream::goodbit) << endl;

	//	printCharacterClassification(i);

	//	cin.clear();
	//	cin.ignore(1024, '\n');
	//	cout << endl;
	//}

	cout << boolalpha;
	classifyCharacters("1234");
	classifyCharacters("a 1234");

	// regular expression

	return 0;
}

