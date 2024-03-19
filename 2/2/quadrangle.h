#pragma once
#include"figure.h"
#include<string>

class quadrangle:public figure {

protected:
	std::string figname;
	int a, b, c, d, A, B, C, D;

public:
	quadrangle() {
		figname = "Четырёхугольник";
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 120;
		C = 90;
		D = 100;
	}

	bool check() override;

	void print_info() override;
};