// 13.3 자료형이 아닌 템플릿 매개변수.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyArray.h"

int main()
{
    // std::vector<double> my_array; my_array.resize(100);
    // MyArray<double> my_array(100);
    //const int i = 100;
    MyArray<double, 100> my_array;  // std::array<double, 100>

    for (int i = 0; i < my_array.getLength(); ++i)
        my_array[i] = i + 65;
    
    my_array.print();

    return 0;
}

