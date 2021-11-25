#include <stdio.h>
int main(void)
{
    int number;
    printf("Please input a number, and enter q to quit: ");
    while ((scanf("%d", &number)) == 1)
    {
        if (number > 6)
            if (number < 12)
                printf("You're close!\n");
            else
                printf("Sorry,you lose a turn!\n");
    }
    return 0;
}