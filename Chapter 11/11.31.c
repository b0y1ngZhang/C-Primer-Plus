/*repeat.c -- main() with parameters*/
#include <stdio.h>
int main(int argc, char *argv[])
// argument count argument value
// The system uses spaces to represent the end of one string and the beginning of the next string.
{
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");
    return 0;
}