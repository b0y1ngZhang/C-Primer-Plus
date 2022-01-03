/*loc_sta.c -- use local static variables*/
#include <stdio.h>
void trystat(void);

int main()
{
    int count;

    for (count = 1; count <= 3; count++)
    {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }

    return 0;
}

void trystat()
{
    int fade = 1;
    static int stay = 1;

    printf("fade=%d and stay =%d\n", fade++, stay++);
}