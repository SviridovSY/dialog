задание номер 1
  
#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	int randomNumber = rand() % 100;

	std::cout << "Я загадал число, отгадай его" << std::endl;

	while (true) {
		int x;
		std::cin >> x;
		if (x == randomNumber) {
			std::cout << "вы угадали" << std::endl;
		}
		else if (x < randomNumber) {
			std::cout << "загаданное число больше" << std::endl;
		}
		else (x > randomNumber) {
			std::cout << "загаданное число меньше" << std::endl;
		}
		
	}

}

задание номер 2

#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int guessNumber;
	int low = 1;
	int high = 100;
	int mid, compare;
	int randomNumber;
	std::cout << "ты загадал число, я отгадаю его" << std::endl;

	do {
		mid = (low + high) / 2;
		printf("Ваше число %d ?", mid);
		std::cout << "1 - Число больше\n2 - Число меньше\n0 - Да!" <<std::endl;
		std::cin >> compare;

		if (compare == 1) {
			low = mid + 1;
		}
		else if (compare == 2) {
			high = mid + 1;
		}
		else if (compare == 0) {
			printf("Вашу число %d", mid);
		}

	} while (compare != 0);
}










способ один

#include <iostream>
#include <Windows.h>


void output(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
	}
	output(arr, size);
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	output(arr, size);

}


способ два


#include <iostream>
#include <Windows.h>


void output(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
}


int findMin(int* arr, int size) {
	int min = arr[0];
	int indexMin = 0;
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
			indexMin = 1;
		}
	}

	return indexMin;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 10;
	int arr[size];

	int newarray[size];
	int minEL;

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
	}
	output(arr, size);
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	output(arr, size);

	for (int i = 0; i < size; i++) {
		minEL = findMin(arr, size);
		newarray[i] = arr[minEL];
		arr[minEL] = INT_MAX;
	}


	output(newarray, size);
}










по убыванию

#include <iostream>
#include <Windows.h>


void output(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
}


int findMin(int* arr, int size) {
	int min = arr[0];
	int indexMin = 0;
	for (int i = 0; i < size; i++) {
		if (min < arr[i]) {
			min = arr[i];
			indexMin = 1;
		}
	}

	return indexMin;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 10;
	int arr[size];

	int newarray[size];
	int minEL;

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
	}
	output(arr, size);
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	output(arr, size);

	for (int i = 0; i < size; i++) {
		minEL = findMin(arr, size);
		newarray[i] = arr[minEL];
		arr[minEL] = INT_MAX;
	}


	output(newarray, size);
}

