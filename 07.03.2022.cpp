#include <iostream>





int krestik(int player) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	

			std::cout << ' ' << '*' <<' ' << '*' << ' ' << std::endl;
			std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
			std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
		
	
	return 0;
}

int nolik(int player) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;


	return 0;
}



int main() 
{
	int a{ 0 };
	int b;
	b = krestik(a);
	std::cout << b << std::endl;
}
