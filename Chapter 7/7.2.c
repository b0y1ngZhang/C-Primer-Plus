//cypher1.c -- 更改输入，空格不变
#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;
    /*
    ch = getchar();    //读取一个字符
    while (ch != '\n') //当一行未结束时
    {
        if (ch == SPACE) //留下空格
            putchar(ch); //该字符不变
        else
            putchar(ch + 1); //改变其他字符
        ch = getchar();      //获取下一个字符
    }
*/
    while ((ch = getchar()) != '\n')//给ch赋一个值，把ch和'\n'作比较
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
    }
    putchar(ch); //打印换行符
    return 0;
}