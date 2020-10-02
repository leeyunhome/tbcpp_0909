// 2_8 literal constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	using namespace std;

	// 0011 1010 0111 1111
	// 3A7F

	/*int x = 0b1'010;
	cout << x << endl;*/

	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item;

	return 0;
}

