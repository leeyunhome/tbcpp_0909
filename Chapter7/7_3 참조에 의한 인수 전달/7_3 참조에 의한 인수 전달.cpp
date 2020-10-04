// 7_3 참조에 의한 인수 전달.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void printElement(const vector<int>& arr)
//void printElement(int (&arr)[4])
{

}
typedef int* pint;

//void foo(int *&ptr)
void foo(pint &ptr)
{
	cout << ptr << " " << &ptr << endl;
}

void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592;
	const double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	//int arr[]{ 1, 2, 3, 4 };
	vector<int> arr{ 1, 2, 3, 4 };

	printElement(arr);
	/*int x = 5;
	pint ptr = &x;

	cout << ptr << " " << &ptr << endl;
	foo(ptr);*/

	//foo(6);
	/*double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;*/

	return 0;
}

