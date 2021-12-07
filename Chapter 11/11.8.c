/*fgets2.c -- use fgets() and fputs()*/
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    /*Before the user presses the Return key, the input is stored in the temporary storage area (i.e., the buffer).
    Press the Return key to add a newline character to the input and send the whole line input to fgets().*/
        fputs(words, stdout);
    /*fputs() sends characters to another buffer, 
    and when a newline character is sent, the contents of the buffer are sent to the screen.*/
    puts("Done.");
    return 0;
}