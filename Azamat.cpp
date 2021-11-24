#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	std::string player_name;
	std::string player_name2;
	std::string x;
	int y;


	std::cout << "Здравствуй, как тебя зовут?" << std::endl;
	std::cin >> player_name;
	std::cout << "Здравствуй, " << player_name << std::endl;

	std::cout << "А тебя?" << std::endl;
	std::cin >> player_name2;
	std::cout << "А меня зовут " << player_name2 << std::endl;

	std::cout << "Как у тебя дела?" << std::endl;
	std::cin >> x;
	std::cout << "У меня " << x << std::endl;

	std::cout << "А у тебя?" << std::endl;
	std::cin >> x;
	std::cout << "У меня " << x << std::endl;

	std::cout << "Кем ты работаешь?" << std::endl;
	std::cin >> x;
	std::cout << "Я работаю " << x << std::endl;

	std::cout << "А ты кем?" << std::endl;
	std::cin >> x;
	std::cout << "А я работаю " << x << std::endl;

	std::cout << "Сколько тебе лет?" << std::endl;
	std::cin >> y;
	std::cout << "Мне " << y << std::endl;

	std::cout << "А тебе?" << std::endl;
	std::cin >> y;
	std::cout << "А мне " << y << std::endl;
}
