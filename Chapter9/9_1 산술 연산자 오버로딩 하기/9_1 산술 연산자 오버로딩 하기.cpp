// 9_1 산술 연산자 오버로딩 하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() const
	{
		return m_cents;
	}

	int& getCents()
	{
		return m_cents;
	}

	// =, [], (), ->
	Cents operator + (const Cents& c2);
};

Cents Cents::operator + (const Cents& c2)
{
	return Cents(this->m_cents + c2.m_cents);
}
//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.m_cents + c2.m_cents);
//}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	cout << (cents1 + cents2 + Cents(6) + Cents(10) +
		Cents(100)).getCents() << endl;

	// ?: :: sizeof . .*
	// ^

	return 0;
}
