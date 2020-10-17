// 8_13 익명 객체.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A
{
public:
	int m_value;

	A(const int& input)
		: m_value{input}
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void printDouble()
	{
		cout << m_value * 2 << endl;
	}
};

class Cents
{
public:
	int m_cents;

	Cents(int cents)
	{
		m_cents = cents;
	}

	int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	cout << add(Cents(6), Cents(8)).getCents() << endl;
	cout << int(6) + int(8) << endl;
	//A a(1);
	//a.printDouble();
	//A(1).printDouble();

	//a.print();
	
	//A().print();
	//A().print();

	return 0;
}

