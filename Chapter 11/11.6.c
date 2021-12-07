/*getsputs.c -- use gets() and puts()*/
#include <stdio.h>
#define STLEN 5
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    gets(words); // classic usage
    /*gets() reads the whole line input until it encounters a newline character, 
    then discards the newline character, stores the rest of the character,
    and adds an empty character at the end of these characters to make it a C string.*/
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    /*puts() is used to display strings and add newline characters at the end.*/
    puts("Done.");
    return 0;
}
//If the string entered is too long, it will cause buffer overflow.

// The array name is converted to the address of the first element of the array.
