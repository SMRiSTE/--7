#include"triangle.h"

bool triangle::check() {
	if ((a == b && c == b && d == c) && (A == 90 && B == 90 && C == 90 && D == 90)) {
		return true;
	}
	else {
		return false;
	}
}

void triangle::print_info() {
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << std::endl;
}