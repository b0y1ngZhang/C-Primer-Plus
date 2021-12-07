/*put1.c -- print string without adding \n*/
#include <stdio.h>
void put1(const char *string) // Will not change the string
{
    while (*string != '\0')
        putchar(*string++);
}