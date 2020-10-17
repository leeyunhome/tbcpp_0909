// 16_2 STL 반복자 소개.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	map<int, char> container;
	for (int i = 0; i < 10; ++i)
		container.insert(make_pair(i, 65 + i));

	map<int, char>::const_iterator itr;
	itr = container.begin();
	while (itr != container.end())
	{
		//cout << *itr << " ";
		cout << itr->first << " " << itr->second << endl;
		++itr;
	}
	cout << endl;

	return 0;
}
