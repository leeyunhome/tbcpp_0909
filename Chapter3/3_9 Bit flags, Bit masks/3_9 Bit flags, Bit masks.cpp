// 3_9 Bit flags, Bit masks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << std::bitset<32>(red_mask) << endl;
	cout << std::bitset<32>(green_mask) << endl;
	cout << std::bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xE67E22;

	cout << std::bitset<32>(pixel_color) << endl;

	//
	unsigned char red, green, blue;

	red = (pixel_color & red_mask) >> 16;
	blue = pixel_color & blue_mask;
	green = (pixel_color & green_mask) >> 8;

	cout << "red " << std::bitset<8>(red) << " " << int(red) << endl;
	cout << "blue " << std::bitset<8>(blue) << " " << int(blue) << endl;
	cout << "green " << std::bitset<8>(green) << " " << int(green) << endl;

	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	//const unsigned char opt0 = 1 << 0;
	//const unsigned char opt1 = 1 << 1;
	//const unsigned char opt2 = 1 << 2;
	//const unsigned char opt3 = 1 << 3;
	//// opt4, 5, 6, 7

	//cout << bitset<8>(opt0) << endl;
	//cout << bitset<8>(opt1) << endl;
	//cout << bitset<8>(opt2) << endl;
	//cout << bitset<8>(opt3) << endl;

	return 0;
}
