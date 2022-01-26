задание номер 1
#include <iostream>
#include <Windows.h>



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(4784);

	const int size = 10;
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = rand();
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
		
		

	}

	std::cout << arr[0][0] + arr[0][1] + arr[0][2];
	std::cout << arr[1][0] + arr[1][1] + arr[1][2];
	std::cout << arr[2][0] + arr[2][1] + arr[2][2];
}

задание номер 6
	
#include <iostream>
#include <Windows.h>







int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(4784);

	const int size = 10;
	int arr[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = rand();
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n\n";
		
		

	}

	
	
	int a1 = arr[0][0] + arr[0][1] + arr[0][2];
	int a2 = arr[1][0] + arr[1][1] + arr[1][2];
	int a3 = arr[2][0] + arr[2][1] + arr[2][2];

	std::cout << a3 << "\n" << std::endl;

	
}
