#include <iostream>


int main() {
	setlocale(LC_ALL, "RUS");
	double fuel;

	std::cout << "Enter fuel:";
	std::cin >> fuel;

	if (fuel > 50.0) {
		std::cout << "������� ����������";
	}
	else if (fuel < 20.0) {
		std::cout << "������� �� ������, ������ �����������!";
	}
	else {
		std::cout << "������������� ��������";
	}

	return 0;
}