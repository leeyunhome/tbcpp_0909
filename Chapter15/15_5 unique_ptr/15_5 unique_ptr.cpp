// 15_5 unique_ptr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Resource.h"

int main()
{
	{
		Resource* res = new Resource(100000000);
	}
	return 0;
}
