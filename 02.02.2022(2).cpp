#include <iostream>
#include <Windows.h>




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	srand(time(0));
	int randomNumber = rand() % 6;
	int randomNumber2 = rand() % 6;
	int brosok;
	int brosok2;
	int chislo;
	std::cout<< "Нажмите 1 чтобы бросить кубик" <<std::endl;
	
	for (int i = 0; i < 4; i++) {
		std::cout << std::endl;
		std::cin >> brosok;
		std::cin >> brosok2;
		brosok = rand() % (6 - 1 + 1) + 1;
		brosok2 = rand() % (6 - 1 + 1) + 1;
		std::cout <<" Первый кубик" << brosok << std::endl;
		std::cout << "Второй кубик " << brosok2 << std::endl;
		
		if (brosok == 1 ) {
			std::cout << "________" <<std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|______|" << std::endl;
		}
		else if (brosok == 2 ) {
			std::cout << " ________" << std::endl;
			std::cout << "|   *    |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|___*__  |" << std::endl;
		}
		else if (brosok == 3 ) {
			std::cout << "________" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|___*__|" << std::endl;
		}
		else if (brosok == 4) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|_*___*|" << std::endl;
		}
		else if (brosok == 5 ) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|_*__*_|" << std::endl;
		}
		else if (brosok == 6 ) {
			std::cout << "________" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*___*__|" << std::endl;

		}

		if (brosok2 == 1) {
			std::cout << "________" << std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|______|" << std::endl;
		}
		else if (brosok2 == 2) {
			std::cout << " ________" << std::endl;
			std::cout << "|   *    |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|___*__  |" << std::endl;
		}
		else if (brosok2 == 3) {
			std::cout << "________" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|___*__|" << std::endl;
		}
		else if (brosok2 == 4) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|      |" << std::endl;
			std::cout << "|_*___*|" << std::endl;
		}
		else if (brosok2 == 5) {
			std::cout << "________" << std::endl;
			std::cout << "| *  * |" << std::endl;
			std::cout << "|   *  |" << std::endl;
			std::cout << "|_*__*_|" << std::endl;
		}
		else if (brosok2 == 6) {
			std::cout << "________" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*   *  |" << std::endl;
			std::cout << "|*___*__|" << std::endl;

		}
		

	}
}
