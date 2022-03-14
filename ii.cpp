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


void pole()
{

}


void gridold() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
		<< "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|'
		<< "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

	std::cout << "1  2  3" << std::endl;
	std::cout << "4  5  6" << std::endl;
	std::cout << "7  8  9" << std::endl;
	
}
void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

}

//void winner(int x[3][3]) {
//	if (x[1][0] == x[1][1] && x[1][1] == x[1][2]) {
//		if (x[1][0] == 0) {
//
//
//			std::cout << "pobeda" << std::endl;
//		}
//		else if (x[1][0] == 1) {
//			std::cout << "pobeda" << std::endl;
//
//		}
//	}
//}

void cross(int coord)
{
	int x{ 0 }, y{ 0 };
	if (coord == 1) {
		x = 1;
		y = 0;
	}
	else if (coord == 2) {
		x = 8;
		y = 0;
	}
	else if (coord == 3) {
		x = 15;
		y = 0;
	}
	else if (coord == 4) {
		x = 1;
		y = 3;
	}
	else if (coord == 5) {
		x = 8;
		y = 3;
	}
	else if (coord == 6) {
		x = 15;
		y = 3;
	}
	else if (coord == 7) {
		x = 1;
		y = 6;
	}
	else if (coord == 8) {
		x = 8;
		y = 6;
	}
	else if (coord == 9) {
		x = 15;
		y = 6;
	}
	gotoxy(x, y);
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	gotoxy(x, y + 1);
	std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
	gotoxy(x, y + 2);
	std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
	
}
void gotoxy1(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);

}
void null(int coord)
{
	int x{ 0 }, y{ 0 };
	if (coord == 1) {
		x = 1;
		y = 0;
	}
	else if (coord == 2) {
		x = 8;
		y = 0;
	}
	else if (coord == 3) {
		x = 15;
		y = 0;
	}
	else if (coord == 4) {
		x = 1;
		y = 3;
	}
	else if (coord == 5) {
		x = 8;
		y = 3;
	}
	else if (coord == 6) {
		x = 15;
		y = 3;
	}
	else if (coord == 7) {
		x = 1;
		y = 6;
	}
	else if (coord == 8) {
		x = 8;
		y = 6;
	}
	else if (coord == 9) {
		x = 15;
		y = 6;
	}
	gotoxy(x, y);
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
	gotoxy(x, y + 1);
	std::cout << ' ' << '*' << " " << '*' << ' ' << std::endl;
	gotoxy(x, y + 2);
	std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
}




int mest(int z, int x, int y) {
	if (z == 1) {
		x = 0;
		y = 0;
	}
	else if (z == 2) {
		x = 1;
		y = 0;
	}
	else if (z == 3) {
		x = 2;
		y = 0;
	}
	else if (z == 4) {
		x = 0;
		y = 1;
	}
	else if (z == 5) {
		x = 1;
		y = 1;
	}
	else if (z == 6) {
		x = 2;
		y = 1;
	}
	else if (z == 7) {
		x = 0;
		y = 2;
	}
	else if (z == 8) {
		x = 1;
		y = 2;
	}
	else if (z == 9) {
		x = 2;
		y = 2;
	}
	return 0;
}



void winner(int x[3][3]) {
	
	if (x[0][0] == x[0][1] && x[0][1] == x[0][2]) {
		if(x[0][0] == 0){
			std::cout << "Win" << std::endl;

		}
		else if (x[0][0] == 1) {
			std::cout << "Win" << std::endl;
		}
		
	}
	else if (x[1][0] == x[1][1] && x[1][1] == x[1][2]) {
		if (x[1][0] == 0) {
			std::cout << "Win1" << std::endl;

		}
		else if (x[1][0] == 1) {
			std::cout << "Win2" << std::endl;
		}
	}
	else if (x[2][0] == x[2][1] && x[2][1] == x[2][2]) {
		if (x[2][0] == 0) {
			std::cout << "Win1" << std::endl;

		}
		else if (x[2][0] == 1) {
			std::cout << "Win2" << std::endl;
		}
	}
	else if (x[0][0] == x[1][0] && x[1][0] == x[2][0]) {
		if (x[0][0] == 0) {
			std::cout << "Win" << std::endl;

		}
		else if (x[0][0] == 1) {
			std::cout << "Win" << std::endl;
		}
	}
	else if (x[0][1] == x[1][1] && x[1][1] == x[2][1]) {
		if (x[0][1] == 0) {
			std::cout << "Win1" << std::endl;

		}
		else if (x[0][1] == 1) {
			std::cout << "Win2" << std::endl;
		}
	}
	else if (x[0][2] == x[1][2] && x[1][2] == x[2][2]) {
		if (x[0][2] == 0) {
			std::cout << "Win1" << std::endl;

		}
		else if (x[0][2] == 1) {
			std::cout << "Win2" << std::endl;
		}
	}
	else if (x[0][0] == x[1][1] && x[1][1] == x[2][2]) {
		if (x[0][0] == 0) {
			std::cout << "Win1" << std::endl;

		}
		else if (x[0][0] == 1) {
			std::cout << "Win2" << std::endl;
		}
	}
	else if (x[0][0] == x[1][1] && x[1][1] == x[0][1]) {
		if (x[0][0] == 0) {
			std::cout << "Win1" << std::endl;

		}
		else if (x[0][0] == 1) {
			std::cout << "Win2" << std::endl;
		}
	}

	
}

int ii(int n[3][3] = 0) {
	const int cross = 1;
	const int zero = 2;
	n[1][1] = cross;
	if (zero == n[0][1] || zero == n[1][0] || zero == n[1][2] || zero == n[2][1]) {
		
		if (zero == n[0][1]) {


			n[2][0] = cross;
			return 0;
			if (zero == n[0][0]) {
				n[0][2] = cross;
				return 0;
			}
		}



		if (zero == n[1][0]) {
			n[2][2] = cross;
			return 0;
			if (zero == n[2][0]) {
				n[0][0] = cross;
				return 0;
			}
		}
		if (zero == n[2][1]) {
			
			n[0][2] = cross;
			return 0;
			if (zero == n[2][2]) {
				n[2][0] = cross;
				return 0;
			}
		}
		if (zero == n[1][2]) {
			n[0][0] = cross;
			return 0;
			if (zero == n[0][2]) {
				n[2][2] = cross;
				return 0;
			}
			
		}
		/*if (cross == n[0][2] || cross == n[2][2]);*/
	
		
	}
	
}






	int main(void)
	{
		gridold();
		int a{ 0 }, u;
		int b;
		int g;
		int p;
		int l;
		int j[3][3];





		for (int i = 0; i < 10; i++) {
			std::cin >> a;

			
			cross(a);
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cin >> b;
			winner(j);
			mest(a, g, p);
			j[g][p] = 0;

			null(b);
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			winner(j);
			mest(b, g, p);
			j[g][p] = 1;


		}





	}
