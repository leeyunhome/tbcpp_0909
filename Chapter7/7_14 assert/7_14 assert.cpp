// 7_14 assert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert> // assert.h
#include <array>

using namespace std;

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);

	std::cout << my_array[ix] << std::endl;
}
int main()
{
	const int x = 10;

	assert(x == 5);

	static_assert(x == 5, "x should be 5");

	//std::array<int, 5> my_array{ 1, 2, 3, 4, 5 };

	//printValue(my_array, 100);

	//int number = 4;

	//// ...
	//// number should be 5
	//assert(number == 5);

	return 0;
}
