/*fgets1.c -- use fgets() and fputs()*/
#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    /*The second parameter of the fgets() function indicates the maximum number of read-in characters.
    If the value of this parameter is n, fgets() will read n-1 parameters, or until the first newline character encountered.*/
    /*If fgets() reads a newline character, it will be stored in a string.
    This is different from gets(), which discards newline characters.*/
    /*The third parameter of the fgets() function indicates the file to be read in.
    If the data entered from the keyboard is read, stdin(standard input) is used as the parameter,
    and the identifier is defined in stdio.h.*/
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    /*Apple pie, shorter than the whole line input read in by fgets(), so apple pie\n\0 is stored in the array. 
    So when puts() displays the string, a newline character is added at the end,
    so there is an empty line after apple pie. Because fputs() does not add newline characters at the end of the string,
    no empty lines are printed.*/
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    /*Strawberry shortcake, exceeding the size limit, so fgets() only reads 13 characters and stores strawberry sh\0 in the array.
    Again, the puts() function will add a newline character at the end of the string to be output, and fputs() will not do so.*/
    fputs(words, stdout);
    puts("Done.");
    return 0;
}