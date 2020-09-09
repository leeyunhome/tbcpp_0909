// Chapter15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization

//void doSomething()
//{
//	try
//	{
//		//Resource* res = new Resource; // dull pointer
//		AutoPtr<Resource> res(new Resource);	// smart pointer
//
//		return;
//
//		// work with res
//		if (true)
//		{
//			throw - 1; // exception
//		}
//
//		//delete res;
//	}
//	catch (...)
//	{
//
//	}
//	return;
//}

int main()
{
	//doSomething();

	{
		AutoPtr<Resource> res1(new Resource); // int i; int *ptr1(&i); int *ptr2 = nullptr;
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1; // move semantics

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	}

	// syntax vs. semantics (프로그래밍 언어과목 수강할 때 경험)
	//int x = 1, y = 1;
	//x + y;

	//string str1("Hello"), str2("World");
	//str1 + str2; // append

	// value semantics (copy semantics)
	// reference semantics (pointer)
	// move semantics (move)
	
	return 0;
}
