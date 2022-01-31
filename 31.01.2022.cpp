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


#include <iostream>
#include <string>

float value(int a) {
    float b;
    b = (a - 32)*5/9;
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "ВВедите Фарингейт: ";
    float a;
    std::cin >> a;
    std::cout << value(a);
}
	


задание 2
	#include <iostream>
#include <string>

float value(int a) {
    float b;
    b = 25.4 * a;
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "Введите длину в дюймах: ";
    float a;
    std::cin >> a;
    std::cout << value(a);
}

задание номер 3
	

	
#include <iostream>
#include <string>

float value(int a) {
    float b;
    b =  1.60094 / a;
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "Введите длину в километрах: ";
    float a;
    std::cin >> a;
    std::cout << value(a);
}




задание номер 4
	
	
#include <iostream>
#include <string>

float value(int a) {
    float b;
    b = a * (136.4 / 1000);
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "Введите длину в километрах: ";
    float a;
    std::cin >> a;
    std::cout << value(a);
}



задание номер 5

	
#include <iostream>
#include <string>

float value(int a) {
    float b;
    b = 3.14 * a * a;
    return b;
}
int main()
{
    setlocale(0, "rus");
    std::cout << "Введите радиус и высоту: ";
    float a, h;
    std::cin >> a;
    std::cin >> h;
    std::cout << value(a) * h;
}




задание номер 6

	
#include <iostream>
#include <string>

void value(int a, int h) {
    float b;
    if (h < a) {
        std::cout << a << std::endl;
    }
    else {
        std::cout << h << std::endl;
    }

}
int main()
{
    setlocale(0, "rus");
    std::cout << "введите два числа: ";
    float a, h;
    std::cin >> a;
    std::cin >> h;
    value(a, h);
}



задание номер 7
	
#include <iostream>
#include <string>

void value(int a, int h) {
    float b;
    if (a < h) {
        std::cout << ">" << std::endl;
    }
    else if (a = h) {
        std::cout <<  "=" << std::endl;
    }
    else if(h < a) {
        std::cout << ">" << std::endl;
    }

}
int main()
{
    setlocale(0, "rus");
    std::cout << "введите два числа: ";
    float a, h;
    std::cin >> a;
    std::cin >> h;
    value(a, h);
}




