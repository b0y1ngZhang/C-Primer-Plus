//flags.c -- 演示一些格式标记
#include <stdio.h>
int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);                    //16进制
    printf("**%d**% d**% d**\n", 42, 42, -42);            //正值前面生成前导空格，负值不产生—>格式美观
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6); //在整型格式中使用精度生成前导0
    return 0;
}