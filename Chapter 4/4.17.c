/*skiptwo.c -- 跳过输入中的两个整数*/
#include <stdio.h>
int main(void)
{
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n); //跳过两个整数，把第3个整数拷贝给n
    printf("The last integer was %d\n", n);
    return 0;
}