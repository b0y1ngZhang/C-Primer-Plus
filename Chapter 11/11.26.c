/*copy2.c -- use strcpy()*/
/*The strcpy() function also has two useful attributes. First, the return type of strcpy() is char*, 
which returns the value of the first parameter, that is, the address of a character.
Second, the first parameter does not need to point to the beginning of the array. 
This property can be used to copy part of the array.*/
#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
    const char *orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;
    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);
    return 0;
}