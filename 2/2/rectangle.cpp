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
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << " D=" << D << std::endl;
}