#pragma once
#include"quadrangle.h"
#include <string>

class parallelogram :public quadrangle {

public:
	parallelogram() = default;
	parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (a != c || b != d) {
			throw GeometryException("противоположенные стороны не равны");
		}
		else if (A != C || B != D) {
			throw GeometryException("противоположенные углы не равны 90");
		}
		else {
			figname = "Параллелограмм";
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