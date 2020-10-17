// 8_14 Nested types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



class Fruit
{
public:
	enum class FruitType
	{
		APPLE, BANANA, CHERRY,
	};

	class InnerClass
	{

	};

	class InnerStruct
	{

	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}

	return 0;
}
