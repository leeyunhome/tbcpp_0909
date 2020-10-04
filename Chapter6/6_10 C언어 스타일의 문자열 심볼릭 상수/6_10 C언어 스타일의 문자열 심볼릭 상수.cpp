// 6_10 C언어 스타일의 문자열 심볼릭 상수.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const char* getName()
{
	return "Jackjack";
}

int main()
{
	char c = 'Q';
	cout << &c << endl;

	//int int_arr[5] = { 1, 2, 3, 4, 5 };
	//char char_arr[] = "Hello, World!";
	//const char* name = "Jack Jack";

	//cout << int_arr << endl;
	//cout << char_arr << endl;
	//cout << name << endl;

	////char name[] = "Jack Jack";
	//const char *name = getName();
	//const char *name2 = getName();

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;

	return 0;
}
