/*loccheck.c -- see where variables are stored*/
#include <stdio.h>
void mikado(int);
int main(void)
{
    int pooh = 2, bah = 5; //the local varialbe in main()
    printf("In main(),pooh=%d and &pooh=%p\n", pooh, &pooh);
    /*print the address in %p format of ANSI C
    display the address in hexadecimal,each hexadecimal number occupies  4 bits*/
    printf("In main(),bah=%d and &bah=%p\n", bah, &bah);
    mikado(pooh);
    return 0;
}
void mikado(int bah)
{
    int pooh = 10;

    printf("In mikado(),pooh=%d and &pooh=%p\n", pooh, &pooh);
    printf("In mikado(),bah=%d and &bah=%p\n", bah, &bah);
}