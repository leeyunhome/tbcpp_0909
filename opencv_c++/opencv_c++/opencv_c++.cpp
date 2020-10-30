// opencv_c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Point
{
private:
	int m_i, m_j;

public:
	Point(const int& i_in = 0, const int& j_in = 0)
		: m_i(i_in), m_j(j_in)
	{}

	Point operator + (const Point& p)
	{
		return Point(this->m_i + p.m_i, this->m_j + p.m_j);
	}

	Point operator + (const int& n)
	{
		return Point(this->m_i + n, this->m_j + n);
	}

	void print()
	{
		std::cout << m_i << ", " << m_j << std::endl;
	}

	friend Point operator + (int n, const Point& p);

	friend std::ostream& operator << (std::ostream& out, const Point& p)
	{
		out << p.m_i << ", " << p.m_i;
		return out;
	}
};

inline Point operator + (int n, const Point& p)
{
	return Point(n + p.m_i, n + p.m_j);
}

int main()
{
	Point a(10, 20);
	Point b(20, 40);
	Point c = a + b; // a.add(b);
	Point d = a + 10;
	Point e = operator + (10, a);//25 + a;

	//c.print();
	//d.print();
	//e.print();
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	return 0;
}

