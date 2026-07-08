#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Вадим\n";
	std::cout << 24 << "\n";
}
