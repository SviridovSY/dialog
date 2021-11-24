#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::string player_name;
	std::string zlodey_name;
	std::string age;
	std::string reason;
	std::string superpower;

	std::cout << " Как звать тебя дитя?" << std::endl;
    std::cin >> player_name;
	std::cout << "Я " << player_name << std::endl;
	

	std::cout << " Назови причину своего появления (назовите причину одним словом) " <<  " ?" << std::endl;
	std::cin >> reason ;
	std::cout << "Причина моего появления " << reason << std::endl;

	std::cout <<"Здесь люди находят своих врагов" << std::endl;

	std::cout << " Назови имя своего врага" << std::endl;
	std::cin >> zlodey_name;
	std::cout << "Его зовут " << zlodey_name << std::endl;
 	

	std::cout << "О, я  слышал об это человеке но как я знаю он может видеть будущее" << std::endl;

	std::cout << "Мне неважно какая у него сила, он не сможет противостоять моей силе" << std::endl;

	std::cout << "Если не секрет скажи в чем твоя сила? (назовите одним словом)" << std::endl;
		std::cin >> superpower;
		std::cout << superpower << std::endl;

		std::cout << "ТВОЯ СИЛА ЭТО" << superpower << std::endl;
	
	std::cout << " Сынок а сколько тебе лет? " << std::endl;
	std::cin >> age;
	std::cout << "Мне " << age << std::endl;

	std::cout << " Береги себя дитя" << std::endl;

	std::cout << "Бывай дед" << std::endl;

	
}
