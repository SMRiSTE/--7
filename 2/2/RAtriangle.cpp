#include"RAtriangle.h"

bool RAtriangle::check() {
	if (A + B + C == 180 && (A == 90 || B == 90 || C == 90)) {
		return true;
	}
	else {
		return false;
	}
}

void RAtriangle::print_info() {
	setlocale(LC_ALL, "Russian");
	std::cout << std::endl << figname << ":" << std::endl;
	std::cout << "�������: �=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: A=" << A << " �=" << B << " �=" << C << std::endl;
}