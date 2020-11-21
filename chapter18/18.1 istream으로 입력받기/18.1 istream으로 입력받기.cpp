// 18.1 istream으로 입력받기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	char buf[1024];

	//cin.ignore(2);
	//cout << (char)cin.peek() << endl;

	cin >> buf;
	cout << buf << endl;

	//cin.unget();
	cin.putback('A');
	cin >> buf;
	cout << buf << endl;
	/*int i;
	float f;

	cin >> i >> f;

	cout << i << " " << f << endl;*/

	/*char buf[100];

	cin.get(buf, 100);
	cout << cin.gcount() << " " << buf << endl;

	cin.getline(buf, 100);
	cout << cin.gcount() << " " << buf << endl;*/

	/*string buf;

	getline(cin, buf);
	cout << cin.gcount() << " " << buf << endl;*/

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

