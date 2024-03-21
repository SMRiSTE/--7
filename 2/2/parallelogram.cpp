#include"parallelogram.h"

bool parallelogram::check() {
	if ((a == c && b == d) && (A == C && B == D)) {
		return true;
	}
	else {
		return false;
	}
}

void parallelogram::print_info() {
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		if (a != b || c != b || d != c) {
			throw std::domain_error("стороны не равны");
		}
		else {
			if (a != c || b != d) {
				throw std::domain_error("противоположенные стороны не равны");
			}
			else {
				throw std::domain_error("противоположенные углы не равны");
			}
		}
	}
	std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
}