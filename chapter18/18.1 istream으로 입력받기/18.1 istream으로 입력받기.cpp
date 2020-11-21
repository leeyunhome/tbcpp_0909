// 18.1 istream으로 입력받기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*int i;
	float f;

	cin >> i >> f;

	cout << i << " " << f << endl;*/

	char buf[5];

	cin.get(buf, 5);
	cout << cin.gcount() << " " << buf << endl;

	cin.get(buf, 5);
	cout << cin.gcount() << " " << buf << endl;


	//char buf[5];

	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	//cin >> setw(5) >> buf;
	//cout << buf << endl;
	//
	//cin >> setw(5) >> buf;
	//cout << buf << endl;

	return 0;
}

