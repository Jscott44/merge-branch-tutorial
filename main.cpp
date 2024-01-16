#include <iostream>
#include "foo.h"


Foo f; // static object


int main()
{
	std::cout << "Hi I am Version 4!\n";
	std::cout << "f.n is " << f.n << '\n';
}

