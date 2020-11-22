// 19.4 레이스 컨디션, std atomic, std scoped_lock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;

mutex mtx;

int main()
{
	/*atomic<int> */int shared_memory(0);

	auto count_func = [&]() {
		for (int i = 0; i < 1000; ++i)
		{
			this_thread::sleep_for(chrono::milliseconds(1));

			//mtx.lock();
			//std::lock_guard lock(mtx);
			//std::scoped_lock lock(mtx);
			shared_memory++;
			//mtx.unlock();
			//shared_memory.fetch_add(1);
		}
	};

	thread t1 = thread(count_func);
	thread t2 = thread(count_func);
	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;

	return 0;
}
