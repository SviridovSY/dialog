задание номер 1
  
#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	int randomNumber = rand() % 100;

	std::cout << "Я загадал число, отгадай его" << std::endl;

	while (true) {
		int x;
		std::cin >> x;
		if (x == randomNumber) {
			std::cout << "вы угадали" << std::endl;
		}
		else if (x < randomNumber) {
			std::cout << "загаданное число больше" << std::endl;
		}
		else (x > randomNumber) {
			std::cout << "загаданное число меньше" << std::endl;
		}
		
	}

}
