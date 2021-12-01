/*array2d.c -- the function processing binary arrays*/
#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int ar[][COLS], int rows);
int sum2d(int ar[][COLS], int rows);
int main(void)
{
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}};
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements=%d\n", sum2d(junk, ROWS));
    return 0;
}
void sum_rows(int ar[][COLS], int rows)
/*Representing that ar points to an array containing 4 int type values 
(in our system, the object pointed to by ar accounts for 16 bytes),
so ar+1 means "add 16 bytes to the address".
If the second pair of square brackets is empty, 
the compiler doesn't know how to deal with it.*/
/*You can also write the size in the first pair of squrare brackets,
but the compiler will ignore the value.*/
{
    int r;
    int c;
    int tot;
    for (r = 0; r < rows; r++)
    {
        tot = 0;
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
        printf("row %d: sum=%d\n", r, tot);
    }
}
/*Generally speaking, when declaring a pointer to an N-demensional array,
only values in the far left square brackets can be omitted.
Because the first parenthesis is only used to indicate that this is a pointer,
while other square brackets are used to describe the type of data object to which the pointer points*/
void sum_cols(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;
    for (c = 0; c < COLS; c++)
    {
        tot = 0;
        for (r = 0; r < rows; r++)
            tot += ar[r][c];
        printf("col %d: sum=%d\n", c, tot);
    }
}
int sum2d(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++)
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
    return tot;
}