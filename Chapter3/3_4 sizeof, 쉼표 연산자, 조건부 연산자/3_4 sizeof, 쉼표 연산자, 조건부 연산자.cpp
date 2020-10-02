// 3_4 sizeof, 쉼표 연산자, 조건부 연산자.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getPrice(bool onSale)
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	using namespace std;

	int x = 5;

	cout << ((x % 2 == 0) ? "even" : "odd") << endl;

	//// conditional operator (arithmetic if)
	//bool onSale = true;

	////const int price = (onSale == true) ? 10 : 100;
	//const int price = getPrice(onSale);

	////if (onSale)
	////	price = 10;
	////else
	////	price = 100;

	//cout << price << endl;

	// comma operator

	//int a = 1, b = 10;
	//int z;

	//z = (++a, a + b);

	//cout << z << endl;

	//int x = 3;
	//int y = 10;
	//int z = (++x, ++y);

	//cout << x << " " << y << " " << z << endl;

	//float a;

	//cout << sizeof(float);
	//cout << sizeof a;

	return 0;
}
