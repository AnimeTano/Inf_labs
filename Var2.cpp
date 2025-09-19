#include <iostream>


int main() {
	setlocale(LC_ALL, "RUS");
	double fuel;

	std::cout << "Enter fuel:";
	std::cin >> fuel;

	if (fuel > 50.0) {
		std::cout << "Топлива достаточно";
	}
	else if (fuel < 20.0) {
		std::cout << "Топливо на исходе, срочно заправьтесь!";
	}
	else {
		std::cout << "Рекомендуется заправка";
	}

	return 0;
}