#include "equitriangle.h"

bool equitriangle::check() {
	if ((a == b && b == c) && (A == 60 && B == 60 && C == 60)) {
		return true;
	}
	else {
		return false;
	}
}

void equitriangle::print_info() {
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << std::endl;
}