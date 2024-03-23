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
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
}