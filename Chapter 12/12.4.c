/*global.c -- use external variables*/
#include <stdio.h>
int units = 0; // external variable
void critic(void);
int main(void)
{
    extern int units; // optional duplicate declaration

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic();
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void)
{
    /*remove optional duplicate declarations*/
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &units);
}