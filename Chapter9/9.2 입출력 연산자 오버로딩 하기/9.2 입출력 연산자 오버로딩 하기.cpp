// 9.2 입출력 연산자 오버로딩 하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include <fstream>

int main()
{
	using namespace std;
	std::ofstream outputfile("output1.txt");

	Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);

	cout << p1 << " " << p2 << endl;
	cout << "input two point" << endl;
	cin >> p1 >> p2;
	cout << p1 << " " << p2 << endl;

	outputfile << p1 << " " << p2 << endl;

	outputfile.close();
	//p1.print();
	//cout << " ";
	//p2.print();
	//cout << endl;

	return 0;
}
