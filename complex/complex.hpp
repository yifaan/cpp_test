#pragma once

class Complex {
	double re, im;
public:
	Complex(double r, double i) :re{r}, im{i} {} //construct
	Complex(double r) :re{r}, im{0} {}
	Complex() :re{0}, im{0} {}

	double real() const {return re;}
	void real(double d) {re = d;}
	double imag() const {return im;}
	void imag(double d) {im = d;}

	Complex& operator+=(const Complex z) {return *this;}

};