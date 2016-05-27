#include <iostream>
#include "core.hpp"

Core::Core():val(0) {}

Core::Core(int val):val(val) {}

int Core::grade() const {
	return val;
}