// 5_2 조건문 if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x > 10)
		cout << "x is greater than 10" << endl;
	else if (x < 10)
		cout << "x is less than 10" << endl;
	else // if (x == 10
		cout << "x is exactly 10" << endl;
	
	/*if (x > 10)
	{
		cout << x << " is greater than 10" << endl;
		cout << "Test 1" << endl;
	}
	else
	{
		cout << x << " is not greater than 10" << endl;
		cout << "Test 1" << endl;
	}*/

}
