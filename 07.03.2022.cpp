#include <iostream>




int krestik(int player) {
	for (int i = 1; i <= 9; i++) {
		std::cin >> player;
		if (player == 1) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 2) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 3) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 4) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 5) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 6) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 7) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 89) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
		else if (player == 9) {
			std::cout << "*   *" << std::endl;
			std::cout << "  *  " << std::endl;
			std::cout << "*   *" << std::endl;
		}
	}
	return 0;
}


int main() 
{
	int a{ 0 };
	int b;
	b = krestik(a);
	std::cout << b << std::endl;
}
