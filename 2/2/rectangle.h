#pragma once
#include"parallelogram.h"

class rectangle :public parallelogram {
public:
	rectangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (a != c || b != d) {
			throw GeometryException("у прямоугольника противоположенные стороны не равны");
		}
		else if (A != 90 || B != A || C != A || D != A) {
			throw GeometryException("у прямоугольника углы не равны 90");
		}
		else {
			figname = "Прямоугольник";
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