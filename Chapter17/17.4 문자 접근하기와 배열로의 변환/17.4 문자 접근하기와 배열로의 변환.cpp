// 17.4 문자 접근하기와 배열로의 변환.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string my_str("abcdefg");

	char buf[20];

	my_str.copy(buf, 5, 2);
	buf[5] = '\0';
	cout << buf << endl;
	//cout << my_str.c_str() << endl;

	//const char* arr = my_str.data();// my_str.c_str();
	//cout << (int)arr[6] << endl;
	//cout << (int)arr[7] << endl;
	//cout << my_str.c_str()[6] << endl;

	//try
	//{
	//	//my_str[100] = 'X';	// 퍼포먼스가 더 중요한 경우
	//	my_str.at(100) = 'X';	// 안정성이 더 중요한 경우
	//}
	//catch (std::exception& e)
	//{
	//	cout << e.what() << endl;
	//}
	
	//cout << my_str[0] << endl;
	//cout << my_str[3] << endl;

	//my_str[3] = 'Z';

	//cout << my_str << endl;

	return 0;
}

