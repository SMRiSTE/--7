#include "issostriangle.h"

bool issostriangle::check() {
	if (A + B + C == 180 && (a == c && A == C)) {
		return true;
	}
	else {
		return false;
	}
}

void issostriangle::print_info() {
	std::cout << std::endl << figname << ":" << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		throw std::domain_error("ни одна пара углов не равны");
	}
	std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << std::endl;
}