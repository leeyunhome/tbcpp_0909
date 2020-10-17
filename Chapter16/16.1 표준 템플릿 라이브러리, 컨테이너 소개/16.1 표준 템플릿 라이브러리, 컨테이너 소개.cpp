﻿// 16.1 표준 템플릿 라이브러리, 컨테이너 소개.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>

using namespace std;

void sequence_containers();

void associative_containers();
void container_adapters();

int main()
{
	//sequence_containers();

	associative_containers();

	//container_adapters();

	return 0;
}

void sequence_containers()
{
	// vector
	//{
	//	vector<int> vec;	// #include <vector>
	//	for (int i = 0; i < 10; ++i)
	//		vec.push_back(i);

	//	for (auto& e : vec)
	//		cout << e << " ";
	//}

	// deque
	//{
	//	deque<int> deq;	// #include <deque>
	//	for (int i = 0; i < 10; ++i)
	//	{
	//		deq.push_back(i);
	//		deq.push_front(i);
	//	}

	//	for (auto& e : deq)
	//		cout << e << " ";
	//	cout << endl;
	//}
}
void associative_containers()
{
	// set
	//{
	//	set<string> str_set;	// 집합

	//	str_set.insert("Hello");
	//	str_set.insert("World");
	//	str_set.insert("Hello");

	//	cout << str_set.size() << endl;

	//	for (auto& e : str_set)
	//		cout << e << " ";
	//	cout << endl;
	//}

	// multiset : duplication is allowed
	/*{
		std::multiset<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		cout << str_set.size() << endl;

		for (auto& e : str_set)
			cout << e << " ";
		cout << endl;
	}*/

	// map : key/value (json)
	//{
	//	std::map<char, int> map;
	//	map['c'] = 50;
	//	map['b'] = 20;
	//	map['a'] = 10;

	//	cout << map['a'] << endl;

	//	map['a'] = 100;	// 갱신

	//	cout << map['a'] << endl;

	//	for (auto& e : map)
	//		cout << e.first << " " << e.second << " ";
	//	cout << endl;
	//}

	// multimap : duplicated keys
	//{
	//	std::multimap<char, int> map;
	//	map.insert(std::pair<char, int>('a', 10));	// Before c++ 14, pair<char, int>('a', 10)
	//	map.insert(std::pair('b', 10));
	//	map.insert(std::pair('c', 10));
	//	map.insert(std::pair('b', 100));

	//	cout << map.count('a') << endl;

	//	for (auto& e : map)
	//		cout << e.first << " " << e.second << " ";
	//	cout << endl;
	//}
}

void container_adapters()
{
	// stack
	//{
	//	cout << "Stack" << endl;

	//	std::stack<int> stack;
	//	stack.push(1);		// push adds a copy
	//	stack.emplace(2);	// emplace constructs a new object
	//	stack.emplace(3);
	//	cout << stack.top() << endl;
	//	stack.pop();
	//	cout << stack.top() << endl;
	//}

	// queue
	//{
	//	cout << "Queue" << endl;

	//	std::queue<int> queue;
	//	queue.push(1);
	//	queue.push(2);
	//	queue.push(3);
	//	cout << queue.front() << " " << queue.back() << endl;
	//	queue.pop();
	//	cout << queue.front() << " " << queue.back() << endl;
	//}

	// Priority queue
	//{
	//	cout << "Priority queue" << endl;

	//	std::priority_queue<int> queue;

	//	for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
	//		queue.push(n);

	//	for (int i = 0; i < 10; ++i)
	//	{
	//		cout << queue.top() << endl;
	//		queue.pop();
	//	}
	//}
}