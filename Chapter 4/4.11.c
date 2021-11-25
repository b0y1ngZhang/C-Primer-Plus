//intconv.c -- 一些不匹配的整型转换
#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short:%hd %hu\n", num, num);
    printf("-num as short and unsigned short:%hd %hu\n", mnum, mnum);
    /*首先，short int的大小是2字节；其次，系统使用二进制补码来表示有符号整数。
    数字0~32767代表它们本身，而数字32768~65535则表示负数。
    其中，65535表示-1，65534表示-2，65200表示-336。
    被解释成无符号int时，65200则代表65200。
    要注意一点：别期望用%u转换说明能把数字和符号分开。*/
    printf("num as int and char:%d %c\n", num, num);

    printf("WORDS as int,short,and char:%d %hd %c\n", WORDS, WORDS, WORDS);
    return 0;
}