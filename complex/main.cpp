#include "complex.hpp"
#include <iostream>

using namespace std;

int main() {
	Complex a(1,2);

	cout << a.real() << endl;

	a.real(5);

	cout << a.real() << endl;

}