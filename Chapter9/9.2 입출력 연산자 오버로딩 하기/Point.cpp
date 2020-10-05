#include "Point.h"

using namespace std;

Point::Point(const double& x_in = 0.0, const double& y_in = 0.0, const double& z_in = 0.0)
    : m_x(x_in), m_y(y_in), m_z(z_in)
{
}

double Point::getX()
{
    return m_x;
}

double Point::getY()
{
    return m_y;
}

double Point::getZ()
{
    return m_z;
}

//void Point::print()
//{
//    cout << m_x << " " << m_y << " " << m_z << endl;
//}
