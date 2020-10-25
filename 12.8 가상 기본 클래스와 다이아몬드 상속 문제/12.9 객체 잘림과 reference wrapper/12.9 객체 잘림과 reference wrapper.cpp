// 12.9 객체 잘림과 reference wrapper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base b)
{
	b.print();
}

int main()
{
	Base b;
	Derived d;

	//std::vector<Base&> my_vec;
	std::vector<std::reference_wrapper<Base>> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& e : my_vec)
		e.get().print();

	//Derived d;
	////Base b;
	////b = d;

	////b.print();
	//doSomething(d);

	return 0;
}

