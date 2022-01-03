/*hiding.c -- variables in blocks*/
#include <stdio.h>
int main()
{
    int x = 30;

    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77;
        printf("x in inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}
/*The purpose of this program example is not to encourage readers to write similar code (according to C's naming rules, 
it is not difficult to think of other variable names), but to explain the specific situation of defining variables in inner blocks.*/