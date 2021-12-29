#include <iostream>
#include <Windows.h>

int main() {
	srand(4784);
	int b=0;
	const int n = 3;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand();
			if (i + j >= n - 1) {
				b += a[i][j];				
			}
			std::cout << a[i][j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << b << std::endl;
}
