#include <stdio.h>
int main(void) /*计算前20个整数的和*/
{
    int count, sum;      //声明：创建名称和类型，并为其分配内存位置
    count = 0;           //表达式语句
    sum = 0;             //表达式语句
    while (count++ < 20) //迭代语句
        sum += count;
    printf("sum=%d\n", sum);
    return 0; //跳转语句
}