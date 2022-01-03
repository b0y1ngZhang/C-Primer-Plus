/*count.c -- use standard I/O*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
/*First of all, the program in program list 13.1 checks the value of argc to see if there are command line parameters.
If not, the program will print a message and exit the program. The string argv[0] is the name of the program.
Explicitly(显式) use argv[0] instead of the program name, 
and the description of the error message will automatically change with the change of the executable file name.
This feature is also convenient in environments like UNIX that allow a single file to have multiple file names.
However, some operating systems may not recognize argv[0], so this usage is not completely portable.*/
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);

    return 0;
}