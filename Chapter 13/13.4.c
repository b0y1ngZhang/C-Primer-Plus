/*reverse.c -- Reversed display the content of the file*/
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032' // File end tags in DOS text files
#define SLEN 81
int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);
    if ((fp = fopen(file, "rb")) == NULL)
    { // Read-only mode
        printf("reverse can't open %s\n", file);
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0L, SEEK_END); // Locate to the end of the file
    last = ftell(fp);        // Assign the number of bytes from the beginning of the file to the end of the file to last.
    for (count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END); // Go backward
        // The first round, locate to the first character at the end of the file (i.e. the last character of the file)
        ch = getc(fp);                  // Read a single character.
        if (ch != CNTL_Z && ch != '\r') // MS-DOS file
            putchar(ch);
    }//Repeat this process until the first character of the file is reached and printed.
    putchar('\n');
    fclose(fp);

    return 0;
}