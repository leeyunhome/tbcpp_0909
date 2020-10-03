// 4_10 struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double height;
	float  weight;
	int    age;
	string name;

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

Person getMe()
{
	Person me{ 2.0, 100.0, 20, "Jack Jack" };

	return me;
}

int main()
{
	Person me_from_func = getMe();
	me_from_func.print();
	
	//me.weight;

	///*me.age = 20;
	//me.name = "Jack Jack";
	//me.height = 2.0;
	//me.weight = 100.0;*/

	//Person mom;
	//Person dad;

	return 0;
}
