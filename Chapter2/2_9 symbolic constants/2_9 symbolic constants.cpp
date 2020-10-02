// 2_9 symbolic constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MY_CONSTANTS.h" // 재사용 가능

//#define PRICE_PER_ITEM 30

using namespace std;

void printNumber(const int my_number)
{
	cout << my_number << endl;
}

int main()
{
	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	//const int price_per_item = 30;

	//int num_item = 123;

	//int price = num_item * price_per_item;

	//const int my_const(123);

	//int number;
	//cin >> number;

	//const int special_number(number);


	//printNumber(123);

	//const double gravity{ 9.8 };

	//gravity = 1.2;

	return 0;
}
