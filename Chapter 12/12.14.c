/*dyn_arr.c -- allocate dynamically arrays*/
#include <stdio.h>
#include <stdlib.h> //provide prototypes of malloc(), free()

int main()
{
    double *ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    if (scanf("%d", &max) != 1)
    {
        puts("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
    }
    ptd = (double *)malloc(max * sizeof(double));
    /*In C, it is not necessary to use double *, but it must be used in C++. 
    Therefore, it is easier to convert C programs to C++ programs using forced type conversion.*/
    if (ptd == NULL)
    {
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    // Now ptd points to the array with max elements
    puts("Enter the values (q to quit):");
    while (i < max && scanf("%lf", &ptd[i]) == 1)
        ++i;
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++)
    {
        printf("%7.2f ", ptd[i]);
        if (i % 7 == 6)
            putchar('\n');
    }
    if (i % 7 != 0)
        putchar('\n');
    puts("Done.");
    free(ptd);
    /*Some operating systems automatically release dynamically allocated memory at the end of the program, but some systems do not.
    To be on the safe side, please use free() and don't rely on the operating system to clean it up.*/

    return 0;
}