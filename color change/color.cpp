#include <iostream>

int main() {
	for (int i = 0; i < 8; i++) {
		std::cout << "\033[3" << i << "m" << 3 << i << "\033[0m";
		std::cout << "\033[9" << i << "m" << 9 << i << "\033[0m";
		std::cout << "\033[4" << i << "m" << 4 << i << "\033[0m";
		std::cout << "\033[10" << i << "m" << 10 << i << "\033[0m\n";
	}
	std::cout << "Enter a color for a test: ";
	int a;
	while (true) {
		std::cin >> a;
		std::cout << "\033[" << a << "mHello, World! ";
	}
	return 0;
}
// use this-> \033[0m \033[0m