//prntval.c -- printf()的返回值
#include <stdio.h>
int main(void)
{
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n", bph2o);
    //打印信息、赋值
    //计算针对所有字符数，包括空格和不可见的换行符(\n)
    printf("The printf() function printed %d characters.\n", rv);
    return 0;
}