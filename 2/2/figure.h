#pragma once
#include <iostream>
#include<string>

class figure {
protected:
	std::string figname;
	int a, b, c, d, A, B, C, D;

public:
	figure() {
		figname = "Треугольник";
		a = 11;
		b = 22;
		c = 33;
		d = 44;
		A = 55;
		B = 66;
		C = 77;
		D = 88;
	}

	virtual void print_info() = 0;
	virtual bool check() = 0;
};