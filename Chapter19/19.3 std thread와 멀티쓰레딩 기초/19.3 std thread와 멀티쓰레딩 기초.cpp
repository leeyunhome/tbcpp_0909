// 19.3 std thread와 멀티쓰레딩 기초.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

int main()
{
	const int num_pro = std::thread::hardware_concurrency();
	
	cout << std::this_thread::get_id() << endl;

	vector<std::thread> my_threads;
	my_threads.resize(num_pro);

	for (auto& e : my_threads)
		e = std::thread([]() {
				cout << std::this_thread::get_id() << endl;
				while (true) {}});

	for (auto& e : my_threads)
		e.join();

	return 0;
}
