#pragma once
#include"quadrangle.h"

class square :public quadrangle {
public:
	square() {
		figname = " вадрат";
		a = 20;
		b = 20;
		c = 20;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}

	bool check() override;

	void print_info() override;
};