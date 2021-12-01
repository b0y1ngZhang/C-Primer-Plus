/*strptr.c -- think of a string as a pointer*/
#include <stdio.h>
int main(void)
{
    printf("%s, %p, %c", "We", "are", *"space farers");
    //*"space farers" represents the value stored on the address to which the character points.
    return 0;
}