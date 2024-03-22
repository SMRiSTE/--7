#include<iostream>
#include<string>
#include"2.h"

int main() {
	setlocale(LC_ALL, "Russian");

	triangle tri(3,4,5,30,60,90);
	RAtriangle rat;
	issostriangle is;
	equitriangle eq(30,30,30,60,60,60);
	quadrangle qu;
	rectangle re;
	square sq;
	parallelogram pa;
	rhomb rh;

	try {
		tri.print_info();
		rat.print_info();
		is.print_info();
		eq.print_info();
		qu.print_info();
		re.print_info();
		sq.print_info();
		pa.print_info();
		rh.print_info();
	}

	catch (const std::domain_error& e) {
		std::cerr << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

}