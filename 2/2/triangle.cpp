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
		std::cout << "����������" << std::endl;
	}
	else {
		throw std::domain_error("����� ����� �� ����� 180");
	}
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << std::endl;
}