// 6_6 C언어 스타일의 배열 문자열.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	char myString[255];

	//cin >> myString;

	cin.getline(myString, 255);

	cout << myString;

	return 0;
}
