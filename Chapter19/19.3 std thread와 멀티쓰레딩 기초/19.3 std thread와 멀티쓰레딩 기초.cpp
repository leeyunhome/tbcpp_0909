// 19.3 std thread와 멀티쓰레딩 기초.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

mutex mtx;	// mutual exclusion

int main()
{
	auto work_func = [](const string& name) -> void
	{
		for (int idx = 0; idx < 5; ++idx)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			cout << 1 + 2 << endl;

			mtx.lock();
			cout << name << " " << std::this_thread::get_id() << " is working " << idx << endl;
			mtx.unlock();
		}
	};

	std::thread t1 = std::thread(work_func, "Jackjack");
	std::thread t2 = std::thread(work_func, "Dash");

	t1.join();
	t2.join();

	return 0;
}
