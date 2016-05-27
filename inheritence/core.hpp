#pragma once

class Core {
public:
	Core();
	Core(int val);
	virtual ~Core() {};
	virtual int grade() const;

	static bool compare(const Core& a, const Core& b) {
		return a.grade() < b.grade();
	}


private:
	int val;
};