#include <iostream>
#include <Windows.h>

int main(){
	float summa, month, procent, everymonth;
	std::cout << "Сумма (руб) ->" << std::endl;
	std::cin >> summa;
	std::cout << "Cрок (мес) -> 12" << std::endl;
	std::cin >> month;
	std::cout << "Процентная ставка (годовых) ->" << std::endl;
	std::cin >> procent;

	std::cout << "---------------------" << std::endl;
	std::cout << "Долг  Процент  Платеж" << std::endl;
	std::cout << "---------------------" << std::endl;

	float plate = summa / month;

	for (int i = 1; i <= month: i++) {
		everymonth = summa /= month;;
		everymonth = (everymonth * 0.14) + plate;
		std::cout << i << ' ' << summa << ' ' << everymonth << std::endl;
		summa -= plate;
	}

}
