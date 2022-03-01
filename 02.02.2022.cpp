задание номер 1

#include <iostream>
#include <Windows.h>


int func(int arr, int arr2) {

	srand(time(0));
	int randomNumber = rand() % 100;

	
	for (int i = 0; i < arr; i++) {
		arr[i] = rand() % 100;
		std::cout << arr[i] <<std::endl;
	}
	for (int j = 0; j < arr2; j++) {
		arr2[j] = rand() % 100;
		std::cout<< arr[j] <<std::endl;
	}
	return 1;
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 10;
	const int size2 = 8;
	int arr[size];
	int arr2[size2];
	func(arr, size);
	func(arr2, size2);



	
	std::cout << func() << std::endl;
}



задание номер 2
	
	
#include <iostream>
#include <Windows.h>


int maximum(int(*a)[5]) {
    int max = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int minimum(int(*a)[5]) {
    int min = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}

int main() {
	srand(4784);
	int b = 0;
	const int n = 5;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % (60 - 30 + 1) + 30;
			
			std::cout << a[i][j] << "\t";
		}
		std::cout << "\n" << "\n";
	}
    std::cout<< minimum <<std::endl;
    std::cout << maximum << std::endl;
}






задание номер 3
	
	
	
	
	
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	srand(time(0));
	int randomNumber = rand() % 6;
	int randomNumber2 = rand() % 6;
	int brosok;
	int brosok2;
	int summa;
	std::cout << "Нажмите 1 чтобы бросить кубик" << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout << std::endl;
		std::cin >> brosok;
		std::cout << "Вы бросили первый кубик" << std::endl;
		std::cout << "Нажмите еще раз 1 чтобы бросить второй кубик" << std::endl;
		std::cin >> brosok2;
		brosok = rand() % (6 - 1 + 1) + 1;
		brosok2 = rand() % (6 - 1 + 1) + 1;
		std::cout << " Первый кубик " << brosok << std::endl;
		std::cout << " Второй кубик " << brosok2 << std::endl;
		 
		if (brosok == 1) {
			std::cout << " ________" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|________|" << std::endl;
		}
		else if (brosok == 2) {
			std::cout << " ________" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|__  *___|" << std::endl;
		}
		else if (brosok == 3) {
			std::cout << " ________" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|___ *__ |" << std::endl;
		}
		else if (brosok == 4) {
			std::cout << " ________" << std::endl;
			std::cout << "| *    * |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|_*___ * |" << std::endl;
		}
		else if (brosok == 5) {
			std::cout << " ________" << std::endl;
			std::cout << "|  *   * |" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|_*__ *_ |" << std::endl;
		}
		else if (brosok == 6) {
			std::cout << " ________" << std::endl;
			std::cout << "|*    *  |" << std::endl;
			std::cout << "|*    *  |" << std::endl;
			std::cout << "|*___ *__|" << std::endl;

		}

		if (brosok2 == 1) {
			std::cout << " ________" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|______  |" << std::endl;
		}
		else if (brosok2 == 2) {
			std::cout << " ________" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|__  *___|" << std::endl;
		}
		else if (brosok2 == 3) {
			std::cout << " ________" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|___ *__ |" << std::endl;
		}
		else if (brosok2 == 4) {
			std::cout << " ________" << std::endl;
			std::cout << "| *    * |" << std::endl;
			std::cout << "|        |" << std::endl;
			std::cout << "|_*___ * |" << std::endl;
		}
		else if (brosok2 == 5) {
			std::cout << " ________" << std::endl;
			std::cout << "|  *   * |" << std::endl;
			std::cout << "|    *   |" << std::endl;
			std::cout << "|_*__ *_ |" << std::endl;
		}
		else if (brosok2 == 6) {
			std::cout << " ________" << std::endl;
			std::cout << "|*    *  |" << std::endl;
			std::cout << "|*    *  |" << std::endl;
			std::cout << "|*___ *__|" << std::endl;

		}
		summa = brosok + brosok2;
		std::cout << " Сумма" << summa << std::endl;

	}
}
