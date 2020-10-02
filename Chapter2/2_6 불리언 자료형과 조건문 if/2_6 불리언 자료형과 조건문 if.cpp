// 2_6 불리언 자료형과 조건문 if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);
}
int main()
{
	using namespace std;

	//cout << std::noboolalpha;
	//cout << (true || true) << endl;
	//cout << (true || false) << endl;
	//cout << (false || true) << endl;
	//cout << (false || false) << endl;

	if (true)
	{
		cout << "This is true" << endl;
		cout << "True second line " << endl;

	}
	else
		cout << "This is false" << endl;


	return 0;
}

