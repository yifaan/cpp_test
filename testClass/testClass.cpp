#include "testClass.hpp"
#include <iostream>

TestClass::TestClass(int x, int y) : x(x), y(y){

}

int TestClass::sum() {
	return x + y;
}

int main() {

	TestClass a(1,2);
	std::cout << a.sum() << std::endl;
	return 0;
}