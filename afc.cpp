задание номер 3
  
  
  #include<iostream>
#include<time.h>
using namespace std;

void main()
{
    setlocale(0, "ru");

    int mas[5][5];
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mas[i][j] = rand() % 101;
            cout << mas[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << "-----------------------------------\n\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0, b = 4, a = 1; j < 5; j++, b--)
        {
            if (j <= 2)
            {
                mas[i][j] = mas[i][b];
            }
            else
            {
                mas[i][j] = mas[i][a];
                a--;
            }
        }
        cout << endl << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mas[i][j] << "\t";
        }
        cout << endl << endl;
    }
}
