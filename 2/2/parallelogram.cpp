#include"parallelogram.h"

bool parallelogram::check() {
	if ((a == c && b == d) && (A == C && B == D)) {
		return true;
	}
	else {
		return false;
	}
}

void parallelogram::print_info() {
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << " D=" << D << std::endl;
}