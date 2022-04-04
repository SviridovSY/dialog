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



задание номер 2
  
  
  
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
            return(second.day - first.day + 60);
        }
    }
    if (first.month == second.month) {
        return(second.day - first.day + 3600);
    }
    else {
        return(second.day - first.day + 60 + 3600);
    }

}

int main()
{
    date first_date{ 30, 15, 2  };
    date second_date{ 25, 15, 2 };
    showdate(first_date, second_date);
    std::cout << showdate(first_date, second_date) << std::endl;
    getchar();
    return 0;
}




задание номер 4
  
  
  
  



#include <iostream>
#include <stdio.h>
#include <stdlib.h>


struct data {
    char* time_start;
    int time_end;
    int date;
    int place;
    int text;
};





int showdata(data date, data place) {
    if (date == 1) {

    }

}

int main()
{

}
