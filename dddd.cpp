#include <iostream>
#include <Windows.h>
#include <string>



void greetings(int npc_id, std::string answ ) {
	std::cout << std::endl << "К какому человеку ты пойдешь?" << std::endl << std::endl;
	std::cin >> npc_id;
	if (npc_id == 1100) {
		std::cout << "Здравствуй странник, не хочешь посмотреть мой товар?" << std::endl;
		std::cout << "Посмотрите ли вы товар этого торговца?" << std::endl;
		std::cin >> answ;
		
		
		if(answ == "да"){
			std::cout << "Торговец показал вам свой товар, ничего интересного вы там не увидели" << std::endl;
		    while (std::cin >> npc_id);
		}
	}
	else if (npc_id == 1200) {
		std::cout << "Я хочу забрать твои деньги" << std::endl;
		std::cout << "Убить бандита?" << std::endl;
		std::cin >> npc_id;
		if ( answ == "да"){
			std::cout << "Вы убили бандита" << std::endl;
		}
	}
	if (npc_id == 1300) {
		std::cout << "о путник пожалуйста избавь нас от бандита" << std::endl;
		std::cin >> npc_id;
	}
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	greetings(1100, "да");
	
	
}
