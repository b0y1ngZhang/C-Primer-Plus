/*day_mon2.c -- ask the compiler to calculate the number of elements*/
#include <stdio.h>
int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    /*If the numbers in square brackets are omitted when initialising the array, 
    the compiler will determine the size of the array according to the number of items in the initialisation list.*/
    int index;
    for (index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("Month %2d has %d days.\n", index + 1, days[index]);
    return 0;
}