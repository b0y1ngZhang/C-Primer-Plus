/*diceroll.c -- rolling dice simulation program*/
/*compile with manydice.c*/
#include "diceroll.h"
#include <stdio.h>
#include <stdlib.h> //provide the prototype of the library function rand()

int roll_count = 0; // external linkage

static int rollem(int sides) // This function is private to the file.
{
    int roll;

    roll = rand() % sides + 1;
    ++roll_count; // calculate the number of function calls

    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;
    if (sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1)
    {
        printf("Need at least 1 die.\n");
        return -1;
    }

    for (d = 0; d < dice; d++)
        total += rollem(sides);

    return total;
}