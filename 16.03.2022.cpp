#include <iostream>

int main()
{
    ///*int y = 5; задание номер 1
    //int x = 6;
    //int* z = &y;
    //int* f = &x;
    //int k;
    //k = *z + *f;
    //std::cout << k << ' ' << &k <<std::endl;*/


   /* int a = 2, b = 5;   задание номер 2
    int* p1 = &a, *p2 = &b;
    *p1 = 10;
    std::cout << *p1 - *p2 <<std::endl;*/



    /* double a = 2.5, b = 5.2, res;   задание номер 3
     double* p1 = &a, *p2 = &b;
     res = *p1 - *p2;
     std::cout << res <<std::endl;*/

     /*  const int SIZE = 10;             задание номер 4
       int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
       int* p = A;
       for (int i = 1; i < SIZE; i++)
           std::cout << *(A + i) << std::endl;*/


    /*srand(time(0));     задание номер 5

    const int g = 10;
    int randomnumber;
    int A[g];
    int* p = A;
    for (int i = -1; i < g; i++) {
        *(p + i) = rand() % 10;
        for (int i = 1; i < g; i++)
            std::cout << *(p + i) << std::endl;

    }*/


    /*int A[10] = { 1,2,-3,4,5,6,7,8,9,10 };     задание номер 6
    int* p = A;
    std::cout << *(p + 2) <<std::endl;*/


   /* int A[16] = { 17,19,25,14,52,63,7,6,9,10,11,12,17,14,15,16 };     задание номер 7
    int* p = A;
    std::cout << *(p + 7) <<std::endl;*/


     int A[20] = { 2,19,5,4,1,3,7,6,9,10,11,12,17,14,15,16,18,8,13,20 };     
    int* p = A;
    std::cout << *(p + 7) <<std::endl;


}
