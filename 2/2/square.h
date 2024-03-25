#pragma once
#include"quadrangle.h"

class square :public quadrangle {
public:
	square(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (a != b || c != b || d != c) {
			throw GeometryException("� �������� �������� �� �����");
		}
		else if (A != 90 || B != A || C != A || D != A) {
			throw GeometryException("� �������� ���� �� ����� 90");
		}
		else {
			figname = "�������";
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