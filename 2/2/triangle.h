#pragma once
#include "figure.h"
#include<string>

class triangle:public figure {

public:
	triangle() {
		figname = "Треугольник";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}

	bool check() override;

	void print_info() override;
};