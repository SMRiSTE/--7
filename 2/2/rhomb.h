#pragma once
#include"parallelogram.h"

class rhomb :public parallelogram {
public:
	rhomb() {
		figname = "Ромб";
		a = 30;
		b = 30;
		c = 30;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 50;
	}

	bool check() override;

	void print_info() override;
};