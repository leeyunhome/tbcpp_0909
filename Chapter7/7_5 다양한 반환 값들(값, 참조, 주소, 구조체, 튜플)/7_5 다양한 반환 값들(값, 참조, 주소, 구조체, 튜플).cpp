// 7_5 다양한 반환 값들(값, 참조, 주소, 구조체, 튜플).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int* getValue(int x)
{
	int value = x * 2;
	return &value;
}

int main()
{
	int value = *getValue(3);

	return 0;
}

