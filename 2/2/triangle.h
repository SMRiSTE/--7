#pragma once
#include "figure.h"
#include<string>

class triangle:public figure {

public:
	triangle() = default;
	triangle(int a , int b, int c,int A,int B,int C) {
		figname = "�����������";
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