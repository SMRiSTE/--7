#pragma once
#include"RAtriangle.h"

class issostriangle :public RAtriangle {
public:
	issostriangle(int a, int b, int c, int A, int B, int C) {
		if (a != c) {
			throw GeometryException("у равнобедренного треугольника стороны не равны");
		}
		else if (A != C) {
			throw GeometryException("у равнобедренного треугольника углы не равны");
		}
		else {
			figname = "Равнобедренный треугольник";
			this->a = a;
			this->b = b;
			this->c = c;
			this->A = A;
			this->B = B;
			this->C = C;
		}
	}

	bool check() override;

	void print_info() override;
};