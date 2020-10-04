// 6_9 포인터 연산과 배열 인덱싱.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(name[0]);

	char* ptr = name;

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(ptr + i);
	}
	//long long array[] = { 9, 7, 5, 3, 1 };
	//long long* ptr = array;

	//for (int i = 0; i < 5; ++i)
	//{
	//	//cout << array[i] << " " << (uintptr_t) & array[i] << endl;
	//	cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	//}

	/*cout << array[0] << " " << (uintptr_t)&array[0] << endl;
	cout << array[1] << " " << (uintptr_t)&array[1] << endl;
	cout << array[2] << " " << (uintptr_t)&array[2] << endl;
	cout << array[3] << " " << (uintptr_t)&array[3] << endl;*/

	//int value = 7;
	//int* ptr = &value;

	//cout << uintptr_t(ptr -1) << endl;
	//cout << uintptr_t(ptr) << endl;
	//cout << uintptr_t(ptr + 1) << endl;
	//cout << uintptr_t(ptr + 2) << endl;

	return 0;
}
