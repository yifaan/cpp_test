#include "extra.hpp"

Extra::Extra():Core(0), extra(10) {}

Extra::Extra(int val):Core(val), extra(10) {}

int Extra::grade() const {
	return Core::grade() + extra;	
}
