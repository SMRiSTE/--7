#pragma once
#include"triangle.h"
#include<string>

class RAtriangle:public triangle {
public:
	RAtriangle() = default;
	RAtriangle(int a, int b, int c, int A, int B, int C) {
		if (C!=90) {
			throw GeometryException("угол C не равен 90");
		}
		else {
			figname = "Прямоугольный треугольник";
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