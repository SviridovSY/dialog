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
