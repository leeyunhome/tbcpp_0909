// 2_5 floating point numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	double pi = 3141.592e-3;
	double d = 234560000000e-3;

	cout << std::setprecision(7);
	cout << pi << endl;
	cout << std::setprecision(12);

	cout << d << endl;
	//double zero = 0.0;
	//double posinf = 5.0 / zero;
	//double neginf = -5.0 / zero;
	//double nan = zero / zero;

	//cout << posinf << " " << std::isinf(posinf) << endl;
	//cout << neginf << " " << std::isinf(neginf) << endl;
	//cout << nan << " " << std::isnan(nan) << endl;
	//cout << 1.0 << " " << std::isnan(1.0) << endl;

	/*double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << setprecision(17);
	cout << d1 << endl;
	cout << d2 << endl;*/

	//cout << d << endl;
	//cout << std::setprecision(17);
	//cout << d << endl;

	//cout << std::setprecision(16) << endl;
	//cout << 1.0 / 3.0 << endl;

	//float f(3.141592f); // 3.14 = 31.4 * 0.1

	//cout << 3.14 << endl;
	//cout << 31.4e-1 << endl;
	//cout << 31.4e-2 << endl;
	//cout << 31.4e1 << endl;
	//cout << 31.4e2 << endl;

	//double d(3.141592);
	//long double ld(3.141592);

	/*cout << std::numeric_limits<float>::lowest() << endl;
	cout << std::numeric_limits<double>::lowest() << endl;
	cout << std::numeric_limits<long double>::lowest() << endl;*/

	return 0;
}
