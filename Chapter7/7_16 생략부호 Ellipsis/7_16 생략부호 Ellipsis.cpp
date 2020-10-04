// 7_16 생략부호 Ellipsis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdarg> // for ellipsis
using namespace std;

double findAverage(int count, ...)
{
	double sum = 0;

	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
		sum += va_arg(list, int);//어떤 타입으로 들어갈지는 사실 미리 정해져있어야 됩니다.

	va_end(list);

	return sum / count;
}
int main()
{
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl;

	return 0;
}

