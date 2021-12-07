/*mod_str.c -- modify string*/
#include <ctype.h> //Functions in ctype.h are usually implemented as macros.
#include <stdio.h>
#include <string.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *str);
int main(void)
{
    char line[LIMIT];
    char *find;
    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n'); // find newline characters
    if (find)                  // If the address is not NULL
        *find = '\0';          // replace with \0
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));
    return 0;
}
void ToUpper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}
int PunctCount(const char *str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
            ct++;
        str++;
    }
    return ct;
}