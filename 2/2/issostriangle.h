#pragma once
#include"RAtriangle.h"

class issostriangle :public RAtriangle {
public:
	issostriangle() {
		figname = "Равнобедренный треугольник";
		a = 10;
		b = 20;
		c = 10;
		A = 50;
		B = 80;
		C = 50;
	}

	bool check() override;

	void print_info() override;
};