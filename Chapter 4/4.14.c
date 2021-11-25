//longstrg.c -- 打印较长的字符串
#include <stdio.h>
int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");

    printf("Here's another way to print a \
long string.\n");//必须从最左边开始，否则5个空格会成为字符串的一部分

    printf("Here's the newest way to print a "
           "long string.\n");
           //ANSI C
           //两个字符串看作是一个字符串
    return 0;
}