#include <iostream>
#include <Windows.h>


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string answ{};
	std::string answ2{};
	std::string answ3{};
	std::string answ4{};
	std::string answ5{};

	std::cout << "Вы идете по лесу и видите супер пупер черный дом."
		              " вы заходите в этот дом и видите черного человека."
		           " Этот человек смотрит на вас, невозможно разглядеть черты лица." 
		           " Подойдете ли вы к нему?"<< std::endl;
	std::cout << std::endl << "да/нет" << std::endl << std::endl;
	std::cin >> answ;
	
	if (answ == "да") {
		std::cout << "Вы подходите к человеку."
			" Заговорите ли вы с ним?" << std::endl;
		std::cout << std::endl << "да/нет" << std::endl << std::endl;
		std::cin >>answ2;

		
		if (answ2 == "да") {
			std::cout << "Вы все же решаетесь поговорить." 
				          " Черный человек вам ничего не ответил."
				           " Пойдете иследовать дом?"<< std::endl;
			std::cout << std::endl << "да/нет" << std::endl << std::endl;
			std::cin >> answ2;
			
		}
		else if (answ5 == "нет") {
			std::cout << "Вы решили исследовать дом игнорируя этого черного человека." "Вдруг вы видите что черный человека исчез""Будете дальше исследовать дом или уйдете отсюда?" << std::endl;
			std::cout << std::endl << "продолжу исследовать/уйду" << std::endl << std::endl;
			std::cin >> answ5;
			if(answ3 == "продолжу"){
				std::cout << "Вас убивает что то не понятное" << std::endl;
			}
			else if (answ3 == "уйду") {
				std::cout << "вы все же не решились исследовать этот дом" << std::endl;
			}
		}
	}
		
	
	
	else if (answ == "нет") {
		std::cout << "Вы не решаетесь заговорить с ним" 
			        " Что вы будете делать дальше?"
			" уйдете отсюда или пойдете исследовать дом игнорируя этого человека" << std::endl;
		std::cout << std::endl << "уйду/пойду исследовать дом игнорируя этого человека" << std::endl << std::endl;
		std::cin >> answ4;
		if (answ4== "уйду") {
			std::cout << "вы все же не решились исследовать этот дом" << std::endl;
		}
		else if (answ4 == "пойду") {
			std::cout << "Вас убивает что то не понятное" << std::endl;
		}
	}
	else {
		std::cout << "ты так и не решился что будешь делать" << std::endl;
	}
	}
