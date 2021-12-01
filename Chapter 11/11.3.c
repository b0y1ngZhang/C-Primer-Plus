/*addresses.c -- address of string*/
#define MSG "I'm special"
#include <stdio.h>
int main(void)
{
    char ar[] = MSG;
    const char *pt = MSG;
    //It is recommended to use the const qualifier when initialising the pointer as a string literal quantity.
    //If you plan to modify the string, don't point the string literal with a pointer.
    printf("address of \"I'm special\":%p\n", "I'm special");
    printf("                address ar:%p\n", ar);
    printf("                address pt:%p\n", pt);
    printf("            address of MSG:%p\n", MSG);
    printf("address of \"I'm special\":%p\n", "I'm special");
    return 0;
}