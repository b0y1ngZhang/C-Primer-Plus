//postage.c -- 一类邮资
#include <stdio.h>
int main(void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;
    printf("ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
        /*逗号运算符的作用：表达式从左往右求值；整个逗号表达式的值是右侧项的值。*/
        printf("%5d $%4.2f\n", ounces, cost / 100.0);
    return 0;
}