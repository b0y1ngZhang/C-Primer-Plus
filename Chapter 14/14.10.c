/*name3.c -- Use pointers and malloc()*/
#include <stdio.h>
#include <stdlib.h> //provide the prototype of strcpy(), strlen()
#include <string.h> //provide the prototype of malloc(), free()
#define SLEN 81
struct namect
{
    char *fname;
    char *lname;
    int letter;
};

void getinfo(struct namect *); // allocate memory
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *); // free up memory
char *s_gets(char *st, int n);

int main()
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);

    return 0;
}

void getinfo(struct namect *pst)
{
    char temp[SLEN];
    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);
    // allocate memory to store name
    pst->fname = (char *)malloc(strlen(temp) + 1);
    // copy name to the dynamically allocated memory
    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);
    pst->lname = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}

void makeinfo(struct namect *pst)
{
    pst->letter = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect *pst)
{
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letter);
}

void cleanup(struct namect *pst)
{
    free(pst->fname);
    free(pst->lname);
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); // find newline character
        if (find)                // if the address is not NULL,
            *find = '\0';        // put a '\0' here.
        else
            while (getchar() != '\n')
                continue; // handle the rest of the line
    }
    return ret_val;
}