#include <iostream>
#include <Windows.h>




int main() {
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/


	/*int sum = 0;
	int n = 5;
	int b;
	
	for (float i = 0; i <= n; i++) {
		sum += 1 / i + 1;
		b = sum;
		std::cout << b <<std::endl;
	}	*/

	char symbol1;
	std::cin >> symbol1;
	for (size_t i = 1; i < 4; i++) {
		/*std::cout << (char)176 << " - " << (int) 'S';*/
		if ('@' < symbol1 && symbol1 < 'X') {
			symbol1 = symbol1 + 1;
			std::cout << (symbol1) << std::endl;
		}

		else if ('`' < symbol1 && symbol1 < 'x') {
			symbol1 = symbol1 + 1;
			std::cout << (symbol1) << std::endl;
		}
		else if(true)
		{
				if ('z' == symbol1) {
					symbol1 = symbol1 - 26;

			}
				symbol1 = symbol1 + 1;
				std::cout << (symbol1) << std::endl;
		}

		
		else
		{
			if ('Z' == symbol1) {
				symbol1 = symbol1 - 26;
				
			}
			symbol1 = symbol1 + 1;
			std::cout << (symbol1) << std::endl;
		}
		
			
	}


	
}
