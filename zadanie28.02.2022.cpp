задание номер 1
  
  
  
#include <iostream>
#include <Windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	int b;
	std::cin >> a;
	b = a * a * a;
	std::cout << b << std::endl;


	

}


задание номер 2
  
  
  
#include <iostream>
#include <Windows.h>




int func(int x, int y, int z) {
	if (x > y) {
		std::cout << x << std::endl;
	}
	if (y > x) {
		std::cout << y << std::endl;
	}
	return 0;
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	int b;
	int c;
	int d;
	std::cin >> a, b;
	c = func(a, b, d);
	std::cout << c << std::endl;
	return 0;




}



задание номер 3

	
	
	
#include <iostream>


int func(int x) {
    if (x > 0) {
        std::cout << "True" << std::endl;
    }
    else if (x < 0) {
        std::cout << "False" << std::endl;
    }
    return 0;
}



int main()
{
    int a;
    int c;
    std::cin >> a;
    c = func(a);
    std::cout << c << std::endl;
}
