/*book.c -- Bibliography of a book*/
#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 41 // Maximum length of the book name +1
#define MAXAUTL 31 // Maximum length of the author's name +1

struct book
{ // Struct template: the tag is book
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}; // The end of the struct template

int main()
{
    struct book library;
    /*struct book{
        char title[MAXTITL];
        char author[MAXAUTL];
        float value;
    } library;*/

    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL); // Access to the title section
    printf("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
    printf("Done.\n");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}