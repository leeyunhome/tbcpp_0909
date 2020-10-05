// 8_1 Object oriented programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Friend
{
public: // access specifier (public, private, protected)

	string name;
	string address;
	int    age;
	double height;
	double weight;
};

int main()
{
	Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 };
	
	print(jj.name, jj.address, jj.age, jj.height, jj.weight);

	vector<string> name_vec;
	vector<string> addr_vec;

	return 0;
}

