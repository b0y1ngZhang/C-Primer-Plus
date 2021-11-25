/*echo_eof.c -- 重复输入，直到文件结尾*/
#include <stdio.h>
int main(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
//Ctrl+Z传输文件结尾信号（许多微型计算机系统把一行开始处的Ctrl+Z识别为文件结尾信号，一些系统把任意位置的Ctrl+Z解释成文件结尾信号）