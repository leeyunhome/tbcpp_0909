#pragma once

#include <iostream>

class Point
{
private:
	double m_x;
	double m_y;
	double m_z;

public:
	Point(const double& x_in, const double& y_in, const double& z_in);
	double getX();
	double getY();
	double getZ();

	//void print();

	friend std::ostream& operator<<(std::ostream& out, const Point& point)
	{
		out << "(" << point.m_x << " " << point.m_y << " " <<
			point.m_z << ")";
		return out;
	}

	friend std::istream& operator>>(std::istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >>
		point.m_z;
		return in;
	}
};
