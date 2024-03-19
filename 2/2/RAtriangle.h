#pragma once
#include"triangle.h"
#include<string>

class RAtriangle:public triangle {
protected:
	std::string figname;
	int a, b, c, A, B, C;

public:
	RAtriangle() {
		figname = "Прямоугольный треугольник";
		a = 15;
		b = 20;
		c = 30;
		A = 30;
		B = 60;
		C = 90;
	}

	bool check() override;

	void print_info() override;
};