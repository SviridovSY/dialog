#include <iostream>
#include <windows.h>


int user = 0;

int login() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	std::cout << " Приветствуем, здесь вы залогинитесь, если вы сотрудник, или дальше продолжите просмотр" << std::endl;
	std::cout << " Введите данные" << std::endl;
	std::cin >> a;
	if (a == 1) {
		std::cout << " Успешная авторизация, добро пожаловать" << std::endl;
		return a;
	}
	else if (a == 2) {
		std::cout << " Вход не выполнен, вы продолжите в качестве гостя" << std::endl;
		return a;
	}
	else {
		std::cout << " Вход не выполнен" << std::endl;
		return 0;
	}
	
}

void run(int user) {
	if (user == 0) {
		std::cout << "Вы не авторизованы, перезапустите программу " << std::endl;

	}
	else {
		std::cout << "FFFFF" << std::endl;
	}
}

void main () {
	
	
	user=login();
	run(user);
	
	
}
