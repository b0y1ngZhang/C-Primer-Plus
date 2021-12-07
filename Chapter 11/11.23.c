/*quit_chk.c -- the beginning of a program*/
#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
char *s_gets(char *st, int n);
int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;
    printf("Enter up to %d lines (type quit to quit):\n", LIM);
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0)
    //Sometimes entering empty lines (i.e. pressing Enter or Return) means that it is more convenient to end the input.
    //To achieve this function, you just need to modify the conditions of the while loop: 
    // while(ct<LIM)&&s_gets(input[ct],SIZE)!=NULL&&input[ct][0]!='\0')
        ct++;
    printf("%d strings entered\n", ct);
    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] = '\n' && st[i] != '\0')
            i++;
        if (st[i] != '\n' && st[i] != '\0')
            st[i] = '\n';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}