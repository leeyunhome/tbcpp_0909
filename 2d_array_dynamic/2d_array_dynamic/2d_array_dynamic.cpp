// 2d_array_dynamic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	const int row = 3;
	const int col = 5;
	int s2d_arr[row][col] =
	{
		{1, 2, 3, 4, 5,},
		{6, 7, 8, 9, 10,},
		{11, 12, 13, 14, 15,},
	};

	int* matrix = new int[row * col];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			matrix[c + col * r] = s2d_arr[r][c];
		}
	}
	// print all elements
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << matrix[c + col * r] << " ";
		}
		cout << endl;
	}

	delete[] matrix;

	// using loop
	//int** matrix = new int* [row];

	//for (int r = 0; r < row; ++r)
	//	matrix[r] = new int[col];

	//for (int r = 0; r < row; ++r)
	//	for (int c = 0; c < col; ++c)
	//		matrix[r][c] = s2d_arr[r][c];

	//// print all elements
	//for (int r = 0; r < row; ++r)
	//{
	//	for (int c = 0; c < col; ++c)
	//	{
	//		cout << matrix[r][c] << " ";
	//	}
	//	cout << endl;
	//}

	//for (int r = 0; r < row; ++r)
	//	delete[] matrix[r];

	//delete[] matrix;

	//int *r1 = new int[col] {1, 2, 3, 4, 5, };
	//int *r2 = new int[col] {6, 7, 8, 9, 10, };
	//int *r3 = new int[col] {11, 12, 13, 14, 15, };

	//int** rows = new int* [row] {r1, r2, r3};

	//for (int r = 0; r < row; ++r)
	//{
	//	for (int c = 0; c < col; ++c)
	//	{
	//		cout << rows[r][c] << " ";
	//	}
	//	cout << endl;
	//}

	//delete[] r1;
	//delete[] r2;
	//delete[] r3;
	//delete[] rows;

	return 0;
}

