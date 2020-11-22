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
	auto work_func = [](const string& name) -> void
	{
		for (int idx = 0; idx < 5; ++idx)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));

			cout << name << " " << std::this_thread::get_id() << " is working " << idx << endl;
		}
	};

	work_func("leehyerim");
	work_func("yuri");

	return 0;
}
