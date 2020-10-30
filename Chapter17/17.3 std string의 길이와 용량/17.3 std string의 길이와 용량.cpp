// 17.3 std string의 길이와 용량.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str("01234567"); //("012345678");
	my_str.reserve(1000);

	cout << std::boolalpha;
	cout << my_str.length() << endl;
	cout << my_str.size() << endl;
	cout << my_str.capacity() << endl;
	cout << my_str.max_size() << endl;

	return 0;
}
