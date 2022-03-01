задание номер 1
  #include <iostream> 
using namespace std;
 
void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int* arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void fill(int* arr, int size) {
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}
 
void printArray(int* arr, int size) {
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
 
int main() {
    int size;
    std::cout << "Enter Array size: ";
    std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter array elements: ";
    fill(arr, size);
    bubbleSort(arr, size);
    std::cout << "\nSorted array: \n";
    printArray(arr, size);
    delete[] arr
    return 0;
}




задание номер 3
  
  
  
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int mas[10] = { 5, 3, 7, -4, -8, 11, -3, 3, 8, 7 };
    int min = mas[0];

    for (int i = 0; i < 10; ++i)
    {
        if (mas[i] < min)
        {
            min = mas[i];
        }
        for (int i = 0; i < 10; ++i)
        if

    }
    cout << "Минимальное значение mas= " << min;
    cout << "\t\n ";
    system("PAUSE");
    return 0;
}

