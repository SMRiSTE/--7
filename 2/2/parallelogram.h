#pragma once
#include"quadrangle.h"
#include <string>

class parallelogram :public quadrangle {

public:
	parallelogram() {
		figname = "ֿאנאככוכמדנאלל";
		a = 20;
		b = 30;
		c = 20;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}

	bool check() override;

	void print_info() override;

};