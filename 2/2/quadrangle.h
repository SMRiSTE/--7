#pragma once
#include"figure.h"
#include<string>

class quadrangle:public figure {

public:
	quadrangle() = default;
	quadrangle(int a, int b, int c,int d, int A, int B, int C,int D) {
		if (A + B + C + D != 360) {
			throw GeometryException("сумма углов не равна 360");
		}
		else {
			figname = "Четырёхугольник";
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			this->A = A;
			this->B = B;
			this->C = C;
			this->D = D;
		}
	}

	bool check() override;

	void print_info() override;
};