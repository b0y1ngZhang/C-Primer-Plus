/*manydice.c -- simulation program for rolling dice many times*/
/*compile with diceroll.c*/
#include "diceroll.h" //provide a prototype for roll_n_dice() and a declaration for the variable roll_count
#include <stdio.h>
#include <stdlib.h> //provide a prototype for the library function srand()
#include <time.h>   //provide a prototype for time()

int main()
{
    int dice, roll;
    int sides;
    int status;

    srand((unsigned int)time(0)); // random seeds
    printf("Enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &dice) == 1 && sides > 0)
    {
        printf("How many dice?\n");
        if ((status = scanf("%d", &dice)) != 1)
        {
            if (status == EOF)
                break; // exit the loop
            else
            {
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while ("getchar()!='\n")
                    continue; // handle wrong input
                printf("How many sides?  Enter 0 to stop.\n");
                continue; // enter the next iteration of the loop
            }
        }
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
        printf("How many sides? Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n",
           roll_count); // use external variable

    printf("GOOD FORTUNE TO YOU!\n");
    return 0;
}