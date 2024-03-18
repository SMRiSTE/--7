#include <iostream>
#include <string>

class bad_length {};

int function(std::string str, int forbidden_length) {

	int a = str.length();
	if (a == forbidden_length) {
		throw bad_length();
	}

	return a;
}

int main() {

	setlocale(LC_ALL, "Russian");

	while(true){

		int forbidden_length;
		std::cout << "Введите запретную длину: ";
		std::cin >> forbidden_length;

		std::string str;
		std::cout << "Введите слово: ";
		std::cin >> str;

		try {
			std::cout << "Длина слова " << ' " ' << str << '"' << " равна " << function(str, forbidden_length) << std::endl;
		}
		catch (bad_length) {
			std::cout << "Вы ввели слово запретной длины! До свидания";
			break;
		}

	}
	
}