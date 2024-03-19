#pragma once
#include "triangle.h"

class equitriangle :public triangle {
public:
	equitriangle() {
		figname = "Равносторонний треугольник";
		a = 30;
		b = 30;
		c = 30;
		A = 60;
		B = 60;
		C = 60;
	}

	bool check() override;

	void print_info() override;
};