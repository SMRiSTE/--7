#include"quadrangle.h"

bool quadrangle::check() {
	if (A + B + C + D == 360) {
		return true;
	}
	else {
		return false;
	}
}

void quadrangle::print_info() {
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
}