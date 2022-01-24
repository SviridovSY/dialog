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

задание номер 2

#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int guessNumber;
	int low = 1;
	int high = 100;
	int mid, compare;
	int randomNumber;
	std::cout << "ты загадал число, я отгадаю его" << std::endl;

	do {
		mid = (low + high) / 2;
		printf("Ваше число %d ?", mid);
		std::cout << "1 - Число больше\n2 - Число меньше\n0 - Да!" <<std::endl;
		std::cin >> compare;

		if (compare == 1) {
			low = mid + 1;
		}
		else if (compare == 2) {
			high = mid + 1;
		}
		else if (compare == 0) {
			printf("Вашу число %d", mid);
		}

	} while (compare != 0);
}
