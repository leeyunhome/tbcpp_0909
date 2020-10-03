// 4_10 struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Employee		// 2 + (2) + 4 + 8 = 16 // padding
{
	short  id;		// 2 bytes
	int    age;		// 4 bytes
	double wage;	// 8 bytes
};

int main()
{
	Employee emp1;

	cout << sizeof(Employee) << endl;

	return 0;
}
