#include <iostream>
#include "extra.hpp"

int main() {
	Core a(10);
	std::cout << a.grade() << std::endl;

	Extra b(10);
	std::cout << b.grade() << std::endl;	

	std::cout << Core::compare(a,b) << std::endl;
}
