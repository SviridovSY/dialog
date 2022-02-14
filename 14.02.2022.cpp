#include <iostream>
#include <Windows.h>




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	

	


	
	srand(time(0));
	int randomnumber = rand() % (9999 - 1000 + 1) + 1000;
	int a = randomnumber % 10;       //1
	int b = randomnumber % 100 / 10; //5
	int c = randomnumber % 1000 / 100; //4
	int d = randomnumber / 1000;       //2

	std::cout << randomnumber << std::endl;

	/*std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;*/

	int z{ 0 };

	

	
	int byki{ 0 };
	int korovy{ 0 };
	while (randomnumber != z) {
	std::cin >> z;
	std::cout << '\n';
	int a1 = z % 10;
	int b1 = z % 100 / 10;
	int c1 = z % 1000 / 100;
	int d1 = z / 1000;

			if (a1 == a)
			{
				byki++;
			}
			else if (a1 == b || a1 == c || a1 == d)
			{
				korovy++;
			}

			if (b1 == b)
			{
				byki++;
			}
			else if (b1 == a || b1 == c || b1 == d)
			{
				korovy++;
			}

			if (c1 == c)
			{
				byki++;
			}
			else if (c1 == b || c1 == a || c1 == d)
			{
				korovy++;
			}

			if (d1 == d)
			{
				byki++;
			}
			else if (d1 == b || d1 == a || d1 == c)
			{
				korovy++;
			}

		std::cout << "Коров:  " << korovy << std::endl;
	std::cout << "Быков:  " << byki << std::endl;
	}
	
}
	
