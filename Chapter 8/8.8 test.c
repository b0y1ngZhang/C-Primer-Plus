#include <stdio.h>
char get_choice(void);
void count(void);
char get_first(void);
int get_int(void);
int main(void)
{
    int choice;
    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            printf("Buy low,sell high.\n");
            break;
        case 'b':
            putchar("\a"); /*ANSI*/
            break;
        case 'c':
            count();
            break;
        default:
            printf("Program error!\n");
            break;
        }
    }
    printf("Bye.\n");
    return 0;
}
char get_choice(void)
{
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a.advice\tb.bell\n");
    printf("c.count \tq.quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please respond with a,b,c,or q.\n");
        ch = getchar();
    }
    return ch;
}
char get_first(void)
{
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}
void count(void)
{
    int n, i;
    printf("Count how far? Enter an integer:\n");
    n = get_int();
    for (i = 1; i <= n; i++)
        printf("%d\t", i);
    printf("\n");
    while (getchar() != '\n')
        continue;
}
int get_int(void)
{
    int input;
    char ch;
    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\nPlease enter an "
               "integer value,such as 25,-178,or 3: ");
    }
    return input;
}