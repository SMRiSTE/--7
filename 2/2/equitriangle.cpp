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
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		if (a != b || b != c) {
			throw std::domain_error("������� �� �����");
		}
		else {
			throw std::domain_error("���� �� �����");
		}
	}
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << std::endl;
}