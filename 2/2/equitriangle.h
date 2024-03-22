#pragma once
#include "triangle.h"

class equitriangle :public triangle {
public:
	equitriangle(int a, int b, int c, int A, int B, int C) {
		figname = "Равносторонний треугольник";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

	bool check() override;

	void print_info() override;
};