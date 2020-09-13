#pragma once
#include <iostream>

class Resource
{
public:
	Resource(int length = 0)
	{
		std::cout << "Resource length constructed" << std::endl;
	}

	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;
	}
};
