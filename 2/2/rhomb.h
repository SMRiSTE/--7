#pragma once
#include"parallelogram.h"

class rhomb :public parallelogram {
public:
	rhomb(int a, int b, int c, int d, int A, int B, int C, int D) {
		if (a != b || c != b || d != c) {
			throw GeometryException("� ����� �������� �� �����");
		}
		else if (A != C || B != D) {
			throw GeometryException("� ����� ���� �� �����");
		}
		else {
			figname = "����";
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