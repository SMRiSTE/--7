#pragma once
#include"parallelogram.h"

class rectangle :public parallelogram {
public:
	rectangle() {
		figname = "Прямоугольник";
		a = 10;
		b = 20;
		c = 10;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}

	bool check() override;

	void print_info() override;
};