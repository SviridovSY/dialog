задание номер 1
  
  
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


struct date {
    int day;
    int month;
    int year;
};





int showdate(date first, date second) {
    if (first.year == second.year) {
        if (first.month == second.month) {
            return(second.day - first.day);
        }
        else {
            return(second.day - first.day + 30);
        }
    }
    if (first.month == second.month) {
        return(second.day - first.day + 365);
    }
    else {
        return(second.day - first.day + 30 + 365);
    }
    
}

int main()
{
    date first_date{ 15, 4, 2022 };
    date second_date{ 25, 4, 2022 };
    showdate(first_date, second_date);
    std::cout << showdate(first_date, second_date) << std::endl;
    getchar();
    return 0;
}
