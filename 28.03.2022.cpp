int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	const int i = 0, size = 8;
//	for (int i = size - 1; i + 1; i--) {
//		std::cout << arr[i];
//	}

  
  
  
  
  
  
  
  
  
  
#include <iostream>


//задание номер 1

//void show(int arr[], int len)
//{
//    for (int i = 0; i < len; i++)
//        printf(" %d", arr[i]);
//}
//
//void show_on_index(int arr[], int len, int index) 
//{
//    if (index > 0 && index < len) 
//    {
//        std::cout << arr[index] <<std::endl;
//    }
//    else
//    {
//        std::cout << "Bad index" << std::endl;
//    }
//}
//
//
//int main()
//{
//	/* Объявляем пустой указатель */
//	int* array = nullptr;
//
//	/* Определяем случайный размер массива */
//	srand(time(NULL));
//	int size = rand() % 50 + 1;
//
//	/* Создание массива */
//	//array = (int*)malloc(size * sizeof(int));
//	array = new int[size];
//	if (array != nullptr)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			array[i] = rand() % 50 + 1;
//		}
//	}
//	else
//		printf("Out of memory/");
//
//	/* Печать массива в консоль*/
//	show(array, size);
//
//	/* Очищаем память массива */
//	//free(array);
//	delete[] array;
//
//	/* Ожидание ввода символа с консоли */
//	getchar();
//
//	return 0;
//}



//задание номер 2

using namespace std;
//
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	const int i = 0, size = 8;
//	for (int i = size - 1; i + 1; i--) {
//		std::cout << arr[i];
//	}
//}


//задание номер 3



//void show(int* arr, int a1, int b1) {
//	for (size_t i = 0; i < a1; i++) {
//		for (size_t j = 0; j < b1; j++) {
//			std::cout << *(arr + (b1 * i + j)) << " ";
//			std::cout << std::endl;
//
//		}
//	}
//}
//
//
//
//void change(int* arr, int a1, int b1) {
//	for (size_t i = 0; i < a1; i++) {
//		for (size_t j = 0; j < b1; j++) {
//			if (i == j) {
//				arr[b1 * i + j] = 0;
//			}
//			
//
//		}
//	}
//}
//
//
//
//
//int main() {
//	int a;
//	int b;
//	srand(time(NULL));
//	a = rand() % 10 + 2;
//	b = rand() % 10 + 2;
//	int* p = new int[a * b];
//	for (size_t i = 0; i < a; i++) {
//		for (size_t j = 0; j < b; j++) {
//			p[b * i + j] = rand() % 50 + 1;
//			
//			
//		}
//	}
//	show(p, a, b);
//	std::cout << std::endl;
//	change(p, a, b);
//	show(p, a, b);
//		
//	delete[] p;
//	return 0;
//}



//задание номер 1

void fill(int* arr, int sz) {
	for (size_t i = 0; i < sz; i++) {
		arr[i] = rand() % 50 + 1;
	}
}


void reverse(int* arr, int sz) {
	for (int i = sz - 1; i > (-1); i--) {
		std::cout << arr[i] << " ";
	}
}


void show(int* arr, int sz) {
	for (size_t i = 0; i < sz; i++) {
		std::cout << arr[i] << " ";
	}
}



void change(int* arr, int a1, int b1) {
	for (size_t i = 0; i < a1; i++) {
		for (size_t j = 0; j < b1; j++) {
			if (i == j) {
				arr[b1 * i + j] = 0;
			}


		}
	}
}




int main() {
	int size;
	int b;
	int* p{ nullptr };
	srand(time(NULL));
	size = rand() % 20 + 2;
	p = new int[size];
	fill(p, size);
	
	show(p, size);
	std::cout << std::endl;
	reverse(p, size);
	
	

	delete[] p;
	return 0;
}

