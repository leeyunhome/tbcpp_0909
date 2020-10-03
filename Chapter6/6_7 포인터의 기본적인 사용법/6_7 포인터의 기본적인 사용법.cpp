// 6_7 포인터의 기본적인 사용법.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
	int a;
	int b;
	int c;
	int d;
};
int* doSomething(int* ptr_a)
{
	return nullptr;
}

int main()
{
	int x = 5;
	double d = 123.0;

	int* ptr_x;
	ptr_x = &x;

	double* ptr_d = &d;

	/*cout << typeid(ptr_x).name() << endl;

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	
	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;*/
	
	//cout << ptr_x << endl;
	//cout << *ptr_x << endl;

	//cout << ptr_d << endl;
	//cout << *ptr_d << endl;

	//cout << x << endl;
	//cout << &x << endl; // & : address-of operator
	//cout << (int)&x << endl;

	//// de-reference operator (*)
	//cout << *&x << endl;

	return 0;
}
