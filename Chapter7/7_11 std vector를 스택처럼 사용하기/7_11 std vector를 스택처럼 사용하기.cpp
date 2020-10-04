// 7_11 std vector를 스택처럼 사용하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void printStack(std::vector<int>& stack)
{
	for (auto& element : stack)
		cout << element << " ";
	cout << endl;
}

int main()
{
	std::vector<int> stack;
	//std::vector<int> stack{ 1, 2, 3 };

	//v.resize(2);
	//stack.reserve(1024);

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);


	//cout << v.size() << " " << v.capacity() << endl;

	////cout << v.at(2) << endl;

	//int* ptr = v.data();

	//cout << ptr[2] << endl;

	return 0;
}

