// 19.2 C++ 17 함수에서 여러 개의 리턴값 반환하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>

using namespace std;

auto my_func()
{
	return tuple(123, 456, 789, 10);
}

int main()
{
	auto [a, b, c, d] = my_func();

	cout << a << " " << b << " " << c << " " << d << endl;
	//auto result = my_func();

	//cout << std::get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << endl;

	return 0;
}
