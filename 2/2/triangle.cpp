#include"triangle.h"

bool triangle::check() {
	if (A + B + C == 180) {
		return true;
	}
	else {
		return false;
	}
}

void triangle::print_info() {
	std::cout << std::endl << figname << ":" << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		throw std::domain_error("сумма углов не равна 180");
	}
	std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << std::endl;
}