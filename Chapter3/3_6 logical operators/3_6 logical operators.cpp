// 3_6 logical operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	using namespace std;

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;
	bool r3 = v1 || (v2 && v3);

	cout << r1 << endl;
	cout << r2 << endl;

	//bool x = true;
	//bool y = false;

	//// De Morgan's Law
	////!(x && y);
	////!x || !y;

	//// XOR
	//// false false false
	//// false true  true
	//// true  false true
	//// true  true  false

	//cout << (x != y) << endl;

	//if (x != y)
	//{

	//}

	return 0;
}

