#include <iostream>
#include <Windows.h>



//int krestik() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	return 0;
//
//}
//
//int nolik() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//
//
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
//	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
//	return 0;
//
//}



//int vstav(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//
//	return 0;
//}


//void gotoxy(int x, int y) {
//	COORD p = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
//}


//void pole()
//{
//	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl
//
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl
//
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;
//
//	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl
//
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl
//
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;
//
//	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl
//
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
//		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl
//
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
//		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;
//}


void gridold() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (int j = 0; j < 11; j++) {
		for (int i = 0; i < 17; i++) {
			if (j == 4 || j == 7) {
				std::cout << "-";
			}
			else if (i == 6 || i == 11) {
				std::cout << "|";
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}



void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
	/*std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;*/
	std::cout << " * * " << std::endl; 
	std::cout << "  *  " << std::endl;
	std::cout << " * * " << std::endl;

}

void gotoxy2(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

	/*std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;*/

	

}



int main(void)
{
	gridold();
	int a{ 0 }, u{ 0 };
	int b;
	int g;
	


	int j;
	std::cin >> a;
	std::cin >> u;
	gotoxy(a, u);
	std::cin >> b;
	std::cin >> g;
	gotoxy2(b, g);

	/*j = vstav(a, u);*/
	
	

	return 0;
}
