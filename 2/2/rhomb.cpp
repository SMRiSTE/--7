#include"rhomb.h"

bool rhomb::check() {
	if ((a == b && c == b && d == c) && (A == C && B == D)) {
		return true;
	}
	else {
		return false;
	}
}

void rhomb::print_info() {
	std::cout << std::endl << figname << ":" << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		if (a != b || c != b || d != c) {
			throw std::domain_error("стороны не равны");
		}
		else {
			if (a != b || b != c) {
				throw std::domain_error("стороны не равны");
			}
			else {
				throw std::domain_error("углы не равны");
			}
		}
	}
	std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
}