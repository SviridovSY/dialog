задание номер 1
  
  #include <iostream>
#include <Windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Выберите тип градуса" << std::endl;
	std::cout << "нажмите 1 чтобы выбрать цельсия" << std::endl;
	std::cout << "нажмите 2 чтобы выбрать фаренгейта" << std::endl;


	double a = 1.8;
	int user;
	int cels;
	int answfareng;
	int fareng;
	int answcels;
	std::cin >> user;

	if(user == 1){
		std::cin >> cels;
		answfareng = cels * 1.8 + 32;
		std::cout << answfareng << std::endl;
}
	else if (user == 2) {
		std::cin >> fareng;
		answcels = (fareng - 32) * 5/9;
		std::cout << answcels << std::endl;
	}
}


задание номер 2
