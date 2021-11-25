#include <stdio.h>
long get_long(void);
int main(void)
{
    int a;
    printf("Please input the value of a: ");
    a = getchar();
    printf("%c", a);
    return 0;
}
long get_long(void)
{
    long input;
    char ch;
    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); //处理错误输入
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value,such as 25,-178,or 3: ");
    }
    return input;
}