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
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		if (check() == true) {
			std::cout << "����������" << std::endl;
		}
		else {
			if (a != c || b != d) {
				throw std::domain_error("����������������� ������� �� �����");
			}
			else {
				throw std::domain_error("���� �� ����� 90");
			}
		}
	}
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << " D=" << D << std::endl;
}