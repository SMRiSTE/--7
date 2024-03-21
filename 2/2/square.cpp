#include"square.h"

bool square::check() {
	if ((a == b && c == b && d == c) && (A == 90 && B == 90 && C == 90 && D == 90)) {
		return true;
	}
	else {
		return false;
	}
}

void square::print_info() {
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		if (a != b || c != b || d != c) {
			throw std::domain_error("������� �� �����");
		}
		else {
			throw std::domain_error("���� �� ����� 90");
		}
	}
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << " D=" << D << std::endl;
}