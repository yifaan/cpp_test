#pragma once
#include "core.hpp"

class Extra: public Core {
public:
	Extra();
	Extra(int val);
	virtual int grade() const;

private:
	int extra;
};