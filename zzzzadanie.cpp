задание номер 1
#include <iostream>
 
 int main(){
  int ind_min = 0, ind_max = 0, sum = 0;
 
for(int i = 0; i < arr_size; ++i)
    if(arr[ind_min] > arr[i])
        ind_min = i;
 
for(int i = 0; i < arr_size; ++i)
    if(arr[ind_max] < arr[i])
        ind_max = i;
 
if(ind_min < ind_max)
{
    for(int i = ind_min + 1; i < ind_max; ++i)
        sum += arr[i];
}
else if(ind_min > ind_max)
{
    for(int i = ind_max + 1; i < ind_min; ++i)
        sum += arr[i];
}
}


задание номер 2
