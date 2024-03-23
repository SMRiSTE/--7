#include<iostream>
#include<string>
#include"2.h"

int main() {
	setlocale(LC_ALL, "Russian");

	try {
		triangle tri(3,4,5,30,60,90);
		tri.print_info();
		RAtriangle rat(3, 4, 5, 30, 60, 90);
		rat.print_info();
		issostriangle is(4,6,4,75,40,75);
		is.print_info();
		equitriangle eq(30, 30, 30, 60, 60, 60);
		eq.print_info();
		quadrangle qu(10, 15, 15, 10, 80, 100, 100, 80);
		qu.print_info();
		rectangle re(10,12,10,12,90,90,90,90);
		re.print_info();
		square sq(10,10,10,10,90,90,90,90);
		sq.print_info();
		parallelogram pa(18,10,15,10,66,120,60,120);
		pa.print_info();
		rhomb rh(10,10,10,10,50,130,55,130);
		rh.print_info();
	
	}

	catch (const std::domain_error& e) {
		std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
	}

}