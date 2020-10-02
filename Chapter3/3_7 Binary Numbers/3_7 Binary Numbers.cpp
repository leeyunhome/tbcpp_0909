// 3_7 Binary Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	unsigned int a = 0b1100;
	unsigned int b = 0b0110;

	cout << std::bitset<4>(a & b) << endl; // bitwise AND
	cout << std::bitset<4>(a | b) << endl; // bitwise OR
	cout << std::bitset<4>(a ^ b) << endl; // bitwise XOR
	
	// Quiz
	cout << (0b0110 >> 2) << endl;

	cout << (5 | 12) << endl;
	cout << (5 & 12) << endl;
	cout << (5 ^ 12) << endl;

	return 0;
}
