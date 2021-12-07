/*fgets3.c -- use fgets()*/
/*The program reads the input line, deletes the newline character stored in the string, 
and if there is no newline character, the number of characters that cannot be assembled is discarded.*/
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++; 
        if (words[i] == '\n')
            words[i] = '\0';
        else//If words[i]=='\0', execute this part of code.
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("done");
    return 0;
}