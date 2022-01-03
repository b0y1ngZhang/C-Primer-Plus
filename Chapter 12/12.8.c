/*r_drive0.c -- test rand0() function*/
/*compile with rand0.c*/
/*gcc 12.8.c 12.7.c*/
#include<stdio.h>
extern unsigned int rand0();
/*The extern keyword reminds reader that rand0() is defined in other files, 
in which the function definition is not required to be written.*/

int main(void)
{
    int count;

    for (count = 0; count < 5;count++)
        printf("%d\n", rand0());

    return 0;
}