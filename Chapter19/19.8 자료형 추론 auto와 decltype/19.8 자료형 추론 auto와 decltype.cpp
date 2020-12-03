#include <iostream>
#include <vector>
#include <algorithm> // std::min

// Reference : http://thbecker.net/articles/auto_and_decltype/section_01.html

using namespace std;

class Examples
{
public:
    void ex1()
    {
        std::vector<int> vect;
        for (std::vector<int>::iterator itr = vect.begin(); itr != vect.end(); ++itr)
            cout << *itr;

        for (auto itr = vect.begin(); itr != vect.end(); itr++)
            cout << *itr;

        for (auto itr : vect) // for (const auto & itr : vect)
            cout << itr;
    }

    void ex2()
    {
        int x = int();

        auto auto_x = x;

        const int& crx = x;

        auto auto_crx1 = crx;

        const auto& auto_crx2 = crx;

        volatile int vx = 1024;

        auto avx = vx;

        volatile auto vavx = vx;
    }

    //template<class T>
    //void func_ex3(T arg)
    //{}

    template<class T>
    void func_ex3(const T& arg)
    {}

    void ex3()
    {
        const int& crx = 123;

        func_ex3(crx);
    }

    void ex4()
    {
        const int c = 0;
        auto& rc = c;
        //rc = 123; // error
    }
};
int main()
{
    Examples examples;

    examples.ex1();
    //examples.ex2();
    //examples.ex3();
    //examples.ex10();
    //examples.ex12();
    //examples.ex14();
    //examples.ex15();
    //examples.ex16();
}

