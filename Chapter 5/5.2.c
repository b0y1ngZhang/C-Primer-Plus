/*shoes.2 -- 计算多个不同鞋码对应的脚长*/
#include <stdio.h>
#define ADJUST 7.31 //字符常量
int main(void)
{
    const double SCALE = 0.333; //const变量
    double shoe, foot;
    printf("Shoe size (men's)   foot length\n");
    shoe = 3.0;
    while (shoe < 18.5) /*while循环开始*/
    {                   /*块(block)开始*/
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.8;
    } /*块结束*/
    printf("If the shoe fits,wea r it.\n");
    return 0;
}