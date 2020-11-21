// 18.6 기본적인 파일 입출력.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // exit()
#include <sstream>

using namespace std;

int main()
{
	// writing
	if (false)
	{
		ofstream ofs("my_first_file.dat");// ios::app, ios::binary
		// ofs.open("my_frist_file.dat");

		if (!ofs)
		{
			cerr << "Couldn't open file " << endl;
			exit(1);
		}

		ofs << "Line 1" << endl;
		ofs << "Line 2" << endl;

		//ofs.close(); // not necessary
	}

	// reading
	if (true)
	{
		ifstream ifs("my_first_file.dat"/*, ios::binary*/);

		if (!ifs)
		{
			cerr << "Cannot open file" << endl;
			exit(1);
		}

		while (ifs)
		{
			std::string str;
			getline(ifs, str);

			std::cout << str << endl;
		}
	}
	return 0;
}

