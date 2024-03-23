#include"rectangle.h"

bool rectangle::check() {
	if ((a == c && b == d) && (A == 90 && B == A && C == A && D == A)) {
		return true;
	}
	else {
		return false;
	}
}

void rectangle::print_info() {
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "Стороны: а=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " В=" << B << " С=" << C << " D=" << D << std::endl;
}