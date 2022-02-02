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
