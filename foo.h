#include <iostream>



struct Foo
{
    int n;
    Foo()
    {
        std::cout << "Enter n: "; // no flush needed
        std::cin >> n;
    }
};

