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
	std::cout << std::endl << figname << ":" << std::endl;
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		if (a != b || c != b || d != c) {
			throw std::domain_error("������� �� �����");
		}
		else {
			if (a != b || b != c) {
				throw std::domain_error("������� �� �����");
			}
			else {
				throw std::domain_error("���� �� �����");
			}
		}
	}
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << " D=" << D << std::endl;
}