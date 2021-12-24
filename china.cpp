#include <iostream>
#include <Windows.h>
#include <string>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int numbers[7];
	std::cout << "Ввод массива целых чисел" << "\n" << "После ввода каждого числа нажмите <Enter>" << "\n" << std::endl;
	for (int i = 0; i < std::size(numbers); i++) {
		
		std::cout << "a[" << i << "] ->" << std::endl;
		std::cin >> numbers[i];
		std::cout << std::endl;
	}
	std::cout << "Mассив";
	for (int i = 0; i < std::size(numbers); i++) {
		std::cout << numbers [i] << ' ';
	}
	int sum = 0;
	for(int i = 0; int )
}
