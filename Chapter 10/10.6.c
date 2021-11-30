/*bounds.c -- Array subscript out of bounds*/
#include <stdio.h>
#define SIZE 4
/*It's best to use symbolic constants to indicate the size of arrays when declaring arrays. 
Doing so can ensure that the size of arrays in the whole program is always the same.*/
int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;
    printf("value1=%d,value2=%d\n", value1, value2);
    for (i = -1; i <= SIZE; i++)
        /*The compiler will not check whether the array subscript is properly used,
    which makes C programs run faster.*/
        arr[i] = 2 * i + 1;
    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("address of arr[-1]:%p\n", &arr[-1]);
    printf("address of arr[4]:%p\n", &arr[4]);
    printf("address of value1:%p\n", &value1);
    printf("address of value2:%p\n", &value2);
    return 0;
}