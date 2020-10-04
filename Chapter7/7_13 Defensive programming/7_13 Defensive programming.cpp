// 7_13 Defensive programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	// violated assumption

	string hello = "Hello, my name is Jack jack";

	cout << "Input from 0 to " << hello.size() - 1 << endl;

	while (true)
	{
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;
	}
	

	// semantic errors
	/*int x;
	cin >> x;

	if (x >= 5)
		cout << "x is greater than 5" << endl;*/

	//// syntax error
	//int x

	return 0;
}

