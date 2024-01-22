#include <iostream>
#include "foo.h"


Foo f; // static object


int main()
{
	std::cout << "Hi I am Version 5!\n"; //test change
	std::cout << "n times p is " << f.n*f.p<< '\n';
}

