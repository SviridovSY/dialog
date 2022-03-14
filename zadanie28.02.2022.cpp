задание номер 1
  
  
  
#include <iostream>
#include <Windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	int b;
	std::cin >> a;
	b = a * a * a;
	std::cout << b << std::endl;


	

}


задание номер 2
  
  
  
#include <iostream>
#include <Windows.h>




int func(int x, int y, int z) {
	if (x > y) {
		std::cout << x << std::endl;
	}
	if (y > x) {
		std::cout << y << std::endl;
	}
	return 0;
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	int b;
	int c;
	int d;
	std::cin >> a, b;
	c = func(a, b, d);
	std::cout << c << std::endl;
	return 0;




}



задание номер 3

	
	
	
#include <iostream>


int func(int x) {
    if (x > 0) {
        std::cout << "True" << std::endl;
    }
    else if (x < 0) {
        std::cout << "False" << std::endl;
    }
    return 0;
}



int main()
{
    int a;
    int c;
    std::cin >> a;
    c = func(a);
    std::cout << c << std::endl;
}





Задание номер 4
	
	
	
#include <iostream>
#include <Windows.h>


int plus(int x, int y, int z) {
    z = x + y;
    std::cout << z <<std::endl;
    return 0;
}
int minus(int x, int y, int z) {
    z = x - y;
    std::cout << z << std::endl;
    return 0;
}
int multi(int x, int y, int z) {
    z = x * y;
    std::cout << z << std::endl;
    return 0;
}
int del(int x, int y, int z) {
    z = x / y;
    std::cout << z << std::endl;
    return 0;
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введите числа" << std::endl;
    int a;
    int b;
    int u{ 0 };
    int c{ 0 };
    int g;
    int h;
    int j;
    int d;
    int odin;
   
  
    std::cout << "Введите 1 если хотите сложить введенные числа" << std::endl;
    std::cout << "Введите 2 если хотите вычесть введенные числа" << std::endl; 
    std::cout << "Введите 3 если хотите умножить введенные числа" << std::endl; 
    std::cout << "Введите 4 если хотите поделить введенные числа" << std::endl; 
    std::cout << "Напишите сколько раз хотите воспользоваться функциями" << std::endl;
    std::cin >> d;
    for (int i = 0; i < d; i++) {   
        std::cin >> a;
    
        std::cin >> b;
       
        std::cin >> odin; 
        c = plus(a, b, u);
        g = minus(a, b, u);
        h = multi(a, b, u);
        j = del(a, b, u);
        if (odin == 1) {
            std::cout << c << std::endl;
        }
        else if (odin == 2) {
            std::cout << g << std::endl;
        }
        else if (odin == 3) {
            std::cout << h << std::endl;
        }
        else if (odin == 4) {
            std::cout << j << std::endl;
        }
        else {
            std::cout << "Введено неверное число" << std::endl;
        }
    }

}


задание номер 5
	
	
	
	
	
#include <iostream>
#include <Windows.h>


int rectangle(int x, int y) {
    for (int i = 0; i < x; i++) {
        std::cout << "-" << std::endl;
        for (int j = 0; j < y; i++) {
            std::cout << "|" << std::endl;
        }
    }
    std::cout << std::endl;
}




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    int b;
    int c;
    int d;
    std::cin >> a;
    std::cin >> b;
    d = rectangle(a, b);
    std::cout << d << std::endl;

}



задание номер 7
	
	
	
#include <iostream>

int prost(int x, int y){
    for(int i = 1; i < x; i++){
        x += x * i;
        
        std::cout << x << std::endl;
    }
    
}



int main(){
    int a;
    int b;
    int c;
    std::cin >> a;
    c = prost(a, b);
    std::cout << c <<std::endl;
}
