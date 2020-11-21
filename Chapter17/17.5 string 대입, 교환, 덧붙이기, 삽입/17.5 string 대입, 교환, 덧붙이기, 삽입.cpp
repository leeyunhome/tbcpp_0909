// 17.5 string 대입, 교환, 덧붙이기, 삽입.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("one");
	string str2("two");
	/*string str2;
	str2 = str1;
	str2 = "two";
	str2.assign("two", 2).append(" ").append("three ").append("Four");*/

	/*cout << str1 << " " << str2 << endl;

	std::swap(str1, str2);

	cout << str1 << " " << str2 << endl;
	str1.swap(str2);
	cout << str1 << " " << str2 << endl;*/

	str1.append("three");
	str1 += "three";

	str1 = str2 + "four";

	return 0;
}
