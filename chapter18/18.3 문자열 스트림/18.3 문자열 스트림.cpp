// 18.3 문자열 스트림.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	stringstream os;

	//int i = 12345;
	//double d = 67.89;

	//os << i << " " << d;
	os << "12345 67.89";

	os.str(string());
	os.clear();

	os << "Hello";

	cout << os.str() << endl;

	//int i2;
	//double d2;

	//os >> i2 >> d2;
	//cout << i2 << "|" << d2 << endl;

	//os << "12345 67.89";

	/*string str1;
	string str2;

	os >> str1 >> str2;
	
	cout << str1 << "|" << str2;*/

	//os << "Hello, World!";	// << insertion operator, >> : extraction operator
	//os << "Hello, World2!" << endl;
	////os.str("Hello, World!");

	//string str;

	////os >> str;
	////str = os.str();

	//cout << os.str() << endl;

	return 0;
}
