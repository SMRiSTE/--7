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
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << std::endl;
}