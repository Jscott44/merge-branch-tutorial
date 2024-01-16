#include <iostream>



struct Foo
{
    int n;
    float p;
    Foo()
    {
        std::cout << "Enter n: "; // no flush needed
        std::cin >> n;
        std::cout << "Enter p: ";
        std::cin >> p;
    }
};

