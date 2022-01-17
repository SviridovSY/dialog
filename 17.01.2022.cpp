задание номер 1
#include <iostream>
#include <Windows.h>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*std::cout << "Введите число" << std::endl;*/
	int a;
	std::cin >> a;
	while (a < 11) {
		std::cout << a << "*" << 1 << "=" << a * 1 << std::endl;
		std::cout << a * 2 << std::endl;
		std::cout << a * 3 << std::endl;
		std::cout << a * 4 << std::endl;
		std::cout << a * 5 << std::endl;
		std::cout << a * 6 << std::endl;
		std::cout << a * 7 << std::endl;
		std::cout << a * 8 << std::endl;
		std::cout << a * 9 << std::endl;
		std::cout << a * 10 << std::endl;
		
		break;
	}


	задание номер 2
	
	for (int y = 0; y <= 7; y++)
	{
		if (y % 2 == 0)
			for (int x = 1; x <= 4; x++)
				std::cout << "* " << "  ";
		else
			for (int x = 1; x <= 4; x++)
				std::cout << "  " << "* ";

		std::cout << std::endl;
	}
	return 0;
}		
