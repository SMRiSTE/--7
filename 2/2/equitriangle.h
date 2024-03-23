#pragma once
#include "triangle.h"

class equitriangle :public triangle {
public:
	equitriangle(int a, int b, int c, int A, int B, int C) {
		if (A != 60 && B != 60 && C != 60) {
			throw GeometryException("���� �� �����");
		}
		else if (a != b || b != c) {
			throw std::domain_error("������� �� �����");
		}
		else {
			figname = "�������������� �����������";
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