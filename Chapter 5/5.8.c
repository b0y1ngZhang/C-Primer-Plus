//sizeof.c -- 使用sizeof运算符
//使用C99新增的%zd转换说明 -- 如果编译器不支持%zd，请将其改成%u或%lu
#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;//C规定，sizeof返回size_t类型的值，这是一个无符号整数类型
    intsize = sizeof(int);
    printf("n=%d,n has %zd bytes;all int have %zd bytes.\n", n, sizeof n, intsize);
    //C99，新增了%zd转换说明用于printf()显示size_t类型的值
    return 0;
}